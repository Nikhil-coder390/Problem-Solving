class Solution {
    public int largestElement(int[] nums) {
        int maxEle = nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=maxEle){
                maxEle = nums[i];
            }
        }
        return maxEle;
    }
}

public class largestElement {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int maxElement = sol.largestElement(nums);
        System.out.println("Largest element in the array: " + maxElement);
    }
}


class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[] arr = new int[nums.length];
        int posIndex = 0, negIndex = 1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<0){
                arr[negIndex] = nums[i];
                negIndex+=2;
            }
            else{
                arr[posIndex] = nums[i];
                posIndex+=2;
            }
        }
        return arr;
    }
}

public class reArrangeArrays {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {3, -2, 1, -5, 2, -4};
        int[] result = solution.rearrangeArray(nums);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }    
}

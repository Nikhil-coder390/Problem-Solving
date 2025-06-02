import java.util.Arrays;
class Solution {
    public int secondLargestElement(int[] nums) {
        if(nums.length<2) return -1;
        Arrays.sort(nums);
        int largestEle = nums[nums.length-1];
        int secondEle = -1;
        for(int i=nums.length-2;i>=0;i--){
            if(nums[i]!=largestEle){
                secondEle = nums[i];
                break;
            }
        }
        return secondEle;
    }
}


public class secondLargestEle {
 public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int secondLargestElement = sol.secondLargestElement(nums);
        System.out.println("Second largest element in the array: " + secondLargestElement);
    }   
}

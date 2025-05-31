package sorting;

class Solution {
    public int[] bubbleSort(int[] nums) {
        for(int i=nums.length-1;i>=0;i--){
            boolean isSwapped = false;
            for(int j=0;j<=i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    isSwapped = true;
                }
            }
            if(!isSwapped) break;
        }
        return nums;     
    }
}

public class bubble {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {64, 34, 25, 12, 22, 11, 90};
        int[] sortedArray = sol.bubbleSort(nums);
        System.out.print("Sorted Array: ");
        for (int num : sortedArray) {
            System.out.print(num + " ");
        }
    }      
}

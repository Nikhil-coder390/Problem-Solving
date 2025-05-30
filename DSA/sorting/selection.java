package sorting;

class Solution {
    public int[] selectionSort(int[] nums) {
        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]>nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
}

public class selection {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {64, 25, 12, 22, 11};
        int[] sortedArray = sol.selectionSort(nums);
        System.out.print("Sorted Array: ");
        for (int num : sortedArray) {
            System.out.print(num + " ");
        }
    }
}

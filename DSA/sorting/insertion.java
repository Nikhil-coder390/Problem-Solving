package sorting;

class Solution {
    public int[] insertionSort(int[] nums) {
        for(int i=1;i<nums.length;i++){
            int key = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        return nums;
    }
}

public class insertion {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int[] sortedNums = sol.insertionSort(nums);
        for (int num : sortedNums) {
            System.out.print(num + " ");
        }
        // Output: 1 2 5 5 6 9
    }
}

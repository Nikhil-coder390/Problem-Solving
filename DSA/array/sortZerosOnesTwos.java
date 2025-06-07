class Solution {
    public void sortZeroOneTwo(int[] nums) {
        int low = 0, mid = 0, high = nums.length-1;
        while(mid<=high){
            if(nums[mid] == 0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int temp2 = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp2;
                high--; 
            }
        }
    }
}

class sortZerosOnesTwos{
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {2, 0, 1, 2, 0, 1, 0};
        solution.sortZeroOneTwo(nums);
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
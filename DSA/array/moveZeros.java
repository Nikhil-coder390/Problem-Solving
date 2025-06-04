class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                nums[j++] = nums[i];
            }
        }
        while(j<nums.length){
            nums[j++] = 0;
        }
    }
}

public class moveZeros {
 public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {0, 1, 0, 3, 12};
        sol.moveZeroes(nums);
        System.out.print("Array after moving zeros: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
 }   
}


class Solution {
    public boolean canJump(int[] nums) {
        int farPoint = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (i > farPoint)
                return false;
            farPoint = Math.max(farPoint, i + nums[i]);
        }
        return true;
    }
}

public class JumpGame {
    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] nums = { 2, 3, 1, 1, 4 };
        System.out.println(obj.canJump(nums)); // Output: true
    }
}
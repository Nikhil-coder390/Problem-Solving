import java.util.ArrayList;
import java.util.Arrays;
class Solution {
    private static boolean sortArr(ArrayList<Integer> nums, int left, int right){
        if(right>=nums.size()) return true;
        if(nums.get(left)>nums.get(right)) return false;
        return sortArr(nums, left+1, right+1);
    }
    public boolean isSorted(ArrayList<Integer> nums) {
        if(1>=nums.size()) return true;
        return sortArr(nums, 0,1);
    }
}
public class arrSort {
    public static void main(String[] args) {
        Solution sol = new Solution();
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        System.out.println(sol.isSorted(nums)); // true

        nums = new ArrayList<>(Arrays.asList(5, 3, 4, 2, 1));
        System.out.println(sol.isSorted(nums)); // false
    }   
}

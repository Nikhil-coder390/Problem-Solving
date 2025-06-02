class Solution {
    public int linearSearch(int nums[], int target) {
        int index = -1;
		for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                index = i;
                break;
            }
        }
        return index;
    }
}

public class linearsearch {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int target = 9;
        int index = sol.linearSearch(nums, target);
        if (index != -1) {
            System.out.println("Element found at index: " + index);
        } else {
            System.out.println("Element not found");
        }
    }
}

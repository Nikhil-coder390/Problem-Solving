class Solution {
    public int majorityElement(int[] nums) {
        int cnt = 0;
        int ele=0;
        for(int i=0;i<nums.length;i++){
            if(cnt == 0){
                cnt = 1;
                ele = nums[i];
            }
            else if(nums[i]==ele) cnt++;
            else cnt--;
        }
        int c = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==ele) c++;
        }
        if(c>nums.length/2) return ele;
        return -1;
    }
}

class majorityEle{
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {3, 2, 3};
        int result = sol.majorityElement(nums);
        System.out.println("Majority Element: " + result); // Output: 3
        int[] nums2 = {1, 2, 3, 4};
        int result2 = sol.majorityElement(nums2);
        System.out.println("Majority Element: " + result2); // Output: -1
    }
}
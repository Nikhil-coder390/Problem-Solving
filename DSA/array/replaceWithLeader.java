import java.util.ArrayList;
import java.util.Collections;
class Solution {
    public ArrayList<Integer> leaders(int[] nums) {
        ArrayList<Integer> temp = new ArrayList<>();
        int max = nums[nums.length-1];
        temp.add(max);
        if(nums.length==0){
            return temp;
        }
        for(int i=nums.length-2;i>=0;i--){
            if(nums[i]>max){
                temp.add(nums[i]);
                max = nums[i];
            }
        }
        Collections.reverse(temp);
        return temp;
    }
}

public class replaceWithLeader {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {16, 17, 4, 3, 5, 2};
        ArrayList<Integer> result = solution.leaders(nums);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}

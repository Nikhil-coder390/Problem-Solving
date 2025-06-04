
import java.util.ArrayList;
import java.util.List;
class Solution {
    public int[] intersectionArray(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        int i=0,j=0;
        List<Integer> tempList = new ArrayList<>();
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]) i++;
            else if(nums2[j]<nums1[i]) j++;
            else{
                tempList.add(nums1[i]);
                i++;
                j++;
            }
        }
        int[] ans = new int[tempList.size()];
        for(int k=0;k<tempList.size();k++){
            ans[k] = tempList.get(k);
        }
        return ans;
    }
}

public class intersectionOfArray {

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums1 = {1, 2, 2, 1};
        int[] nums2 = {2, 2};
        int[] result = solution.intersectionArray(nums1, nums2);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
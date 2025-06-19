import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution1 {
    public List<List<Integer>> fourSum(int[] arr, int target) {
        // code here
        int n = arr.length;
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && arr[j]==arr[j-1]) continue;
                int k=j+1,l=n-1;
                while(k<l){
                    long sum = (long) arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        List<Integer> temp = new ArrayList<>(Arrays.asList(arr[i],arr[j],arr[k],arr[l]));
                        ans.add(temp);
                        k++;
                        l--;
                        while(k<l && arr[k]==arr[k-1]) k++;
                        while(k<l && arr[l]==arr[l+1]) l--;
                    }
                    else if(sum<target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
}
public class fourSum {
    void main(String[] args) {
        Solution1 sol = new Solution1();
        int[] arr = {1, 0, -1, 0, -2, 2};
        int target = 0;
        List<List<Integer>> result = sol.fourSum(arr, target);
        System.out.println(result);
    }
}

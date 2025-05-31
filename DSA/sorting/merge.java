package sorting;
import java.util.ArrayList;
import java.util.List;
class Solution {
    private static void merging(int[] arr, int low, int mid, int high){
        List<Integer> temp = new ArrayList<>();
        int left = low, right = mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.add(arr[left]);
                left++;
            }
            else{
                temp.add(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.add(arr[left]);
            left++;
        }
        while(right<=high){
            temp.add(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i] = temp.get(i-low);
        }
    }
    private static void mergeSorting(int arr[], int low, int high){
        if(low>=high) return;
        int mid = (low+high)/2;
        mergeSorting(arr,low,mid);
        mergeSorting(arr,mid+1,high);
        merging(arr,low,mid,high);
    }
    public int[] mergeSort(int[] nums) {
        mergeSorting(nums,0,nums.length-1);
        return nums;
    }
}

public class merge {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int[] sortedNums = sol.mergeSort(nums);
        for (int num : sortedNums) {
            System.out.print(num + " ");
        }
    }
}

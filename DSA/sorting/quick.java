package sorting;
class Solution {
    private static int findPivot(int[] arr, int low, int high){
        int pivotEle = arr[low];
        int i = low, j = high;
        while(i<j){
            while(arr[i]<=pivotEle && i<=high-1){
                i++;
            }
            while(arr[j]>pivotEle && j>=low+1){
                j--;
            }
            if(i<j) {
                int t1 = arr[i];
                arr[i] = arr[j];
                arr[j] = t1;
            }
        }
         int t2 = arr[low];
         arr[low] = arr[j];
         arr[j] = t2;
         return j;
    }
    private static void qSort(int[] arr, int low, int high){
        if(low<high){
            int pivotIndex = findPivot(arr,low,high);
            qSort(arr,low,pivotIndex-1);
            qSort(arr,pivotIndex+1,high);
        }
    }
    public int[] quickSort(int[] nums) {
        qSort(nums,0,nums.length-1);
        return nums;
    }
}

public class quick {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {5, 2, 9, 1, 5, 6};
        int[] sortedNums = sol.quickSort(nums);
        for (int num : sortedNums) {
            System.out.print(num + " ");
        }
    }
}

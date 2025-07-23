import java.util.ArrayList;
import java.util.List;

class Solution {
    public void merge(int[] num, int low, int mid, int high){
        int left = low, right = mid+1;
        List<Integer> temp = new ArrayList<>();
        while(left<=mid && right<=high){
            if(num[left]<=num[right]) temp.add(num[left++]);
            else temp.add(num[right++]);
        }
        while(left<=mid){
            temp.add(num[left++]);
        }
        while(right <= high){
            temp.add(num[right++]);
        }
        for(int i=low;i<=high;i++){
            num[i] = temp.get(i-low);
        }
    }
    public int countPairs(int[] num, int low, int mid, int high){
        int cnt = 0;
        int right = mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && (long) num[i]>2L*num[right]){ right++;}
            cnt += right - (mid+1);
        }
        return cnt;
    }
    public int mergeSort(int[] num, int low, int high){
        int cnt = 0;
        if(low>=high) return cnt;
        int mid = (low+high)/2;
        cnt += mergeSort(num,low, mid);
        cnt += mergeSort(num, mid+1, high);
        cnt += countPairs(num, low, mid, high);
        merge(num, low, mid, high);
        return cnt;
    }
    public int countRevPairs(int[] arr) {
        // code here
        return mergeSort(arr,0,arr.length-1);
    }
}

class countReversePairs {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] arr = {1, 3, 2, 3, 1};
        int result = solution.countRevPairs(arr);
        System.out.println("Number of reverse pairs: " + result); // Output: 2
    }
}
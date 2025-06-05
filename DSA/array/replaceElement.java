import java.util.ArrayList;
import java.util.Collections;

class Solution {
    public int[] replaceElements(int[] arr) {
     int n = arr.length;
     ArrayList<Integer> temp = new ArrayList<>();
     int max = arr[n-1];
     temp.add(-1);
     for(int i=n-2;i>=0;i--){
        temp.add(max);
        if(arr[i]>=max){
            max = arr[i];
        }
     }
     Collections.reverse(temp);
     int index = 0;
     int[] newArr = new int[n];
     for(int val:temp){
        newArr[index++] = val;
     }   
     return newArr;
    }
}
public class replaceElement {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] arr = {17, 18, 5, 4, 6, 1};
        int[] result = solution.replaceElements(arr);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}

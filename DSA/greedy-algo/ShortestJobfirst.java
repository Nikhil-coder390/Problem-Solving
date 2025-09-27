import java.util.*;
// User function Template for Java

class Solution {
    static int solve(int bt[]) {
        // code here
        int waitTime = 0, totTime = 0;
        Arrays.sort(bt);
        for (int i = 0; i < bt.length; i++) {
            waitTime += totTime;
            totTime += bt[i];
        }
        return (waitTime / bt.length);
    }
}

public class ShortestJobfirst {
    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] bt = { 6, 8, 7, 3, 4 };
        System.out.println(obj.solve(bt)); // Output: 10
    }
}

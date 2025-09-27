import java.util.Arrays;

class Solution {
    public int maxChildren(int[] greed, int[] cookie) {
        // code here
        int l = 0, r = 0;
        int n = greed.length, m = cookie.length;
        Arrays.sort(greed);
        Arrays.sort(cookie);
        while (l < n && r < m) {
            if (greed[l] <= cookie[r]) {
                l++;
            }
            r++;
        }
        return l;
    }
}

class assignCookies {
    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] greed = { 1, 2, 3 };
        int[] cookie = { 1, 1 };
        System.out.println(obj.maxChildren(greed, cookie)); // Output: 1
    }
}
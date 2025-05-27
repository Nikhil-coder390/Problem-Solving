package DSA.strings;

import java.util.Arrays;

// LeetCode Problem: Longest Common Prefix
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        Arrays.sort(strs);
        String first = strs[0];
        String last = strs[strs.length - 1];
        int i = 0;
        while (i < Math.min(first.length(), last.length()) && first.charAt(i) == last.charAt(i)) {
            i++;
        }
        return first.substring(0, i);
    }
}

public class LongestPrefix {
    public static void main(String[] args) {
        Solution sol = new Solution();
        String[] strs = {"flower", "flow", "flight"};
        String result = sol.longestCommonPrefix(strs);
        System.out.println("Longest Common Prefix: " + result);
    }
}

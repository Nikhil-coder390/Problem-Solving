class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        int[] count = new int[26];
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)-'a']++;
            count[t.charAt(i)-'a']--;
        }
        for(int c:count) {
            if(c!=0) return false;
        }
        return true;
    }
}

public class isAnagram {
    public static void main(String[] args) {
        Solution sol = new Solution();
        String s = "anagram";
        String t = "nagaram";
        System.out.println(sol.isAnagram(s, t)); // true

        s = "rat";
        t = "car";
        System.out.println(sol.isAnagram(s, t)); // false
    }
}
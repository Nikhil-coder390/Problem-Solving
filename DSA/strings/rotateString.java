class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()) return false;
        String doubledStr = s + s;
        return doubledStr.contains(goal);
    }
}

public class rotateString {
    public static void main(String[] args) {
        Solution sol = new Solution();
        String s = "abcde";
        String goal = "cdeab";
        System.out.println(sol.rotateString(s, goal)); // true

        s = "abcde";
        goal = "abced";
        System.out.println(sol.rotateString(s, goal)); // false
    }
}
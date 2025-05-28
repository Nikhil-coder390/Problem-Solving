class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()) return false;
        int n = s.length();
        int sMap[] = new int[256];
        int tMap[] = new int[256];
        for(int i=0;i<n;i++){
            if(sMap[s.charAt(i)] != tMap[t.charAt(i)]) return false;
            sMap[s.charAt(i)] = i+1;
            tMap[t.charAt(i)] = i+1;
        }
        return true;
    }
}
public class Isomorphic {
    public static void main(String[] args) {
        Solution sol = new Solution();
        String s = "egg";
        String t = "add";
        System.out.println(sol.isIsomorphic(s, t)); // true

        s = "foo";
        t = "bar";
        System.out.println(sol.isIsomorphic(s, t)); // false

        s = "paper";
        t = "title";
        System.out.println(sol.isIsomorphic(s, t)); // true
    }
}
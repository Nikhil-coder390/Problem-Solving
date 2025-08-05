import java.util.*;


class Solution56 {
    public boolean isPalinSent(String s) {
        // code here
        String str = s.replaceAll("[^a-zA-Z0-9]","");
        String res = str.toLowerCase();
        int l = 0, r = res.length()-1;
        while(l<r){
            if(res.charAt(l) != res.charAt(r)) return false;
            l++;
            r--;
        }
        return true;
    }
}

class PalindromeSentence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Solution56 obj = new Solution56();
        boolean ans = obj.isPalinSent(s);
        System.out.println(ans ? "Yes" : "No");
        sc.close();
    }
}
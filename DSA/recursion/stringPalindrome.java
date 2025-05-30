class Solution {
    private boolean reverse(String s, int left, int right){
        if(left>=right) {return true;}
        if(s.charAt(left)!=s.charAt(right)) return false;
        return reverse(s,left+1,right-1);
    }
    public boolean palindromeCheck(String s) {
        int left = 0;
        int right = s.length()-1;
        return reverse(s,left,right);
    }
}

public class stringPalindrome {
    public static void main(String args[]){
        Solution sol = new Solution();
        String s = "madam";
        boolean result = sol.palindromeCheck(s);
        if(result) {
            System.out.println(s + " is a palindrome.");
        } else {
            System.out.println(s + " is not a palindrome.");
        }
    }    
}

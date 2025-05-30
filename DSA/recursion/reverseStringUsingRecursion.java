import java.util.Vector;
class Solution {
    private static void reverseStringRecurssion(Vector<Character>s,int left,int right){
        if(left>=right) return;
        char temp = s.get(left);
        s.set(left,s.get(right));
        s.set(right,temp);
        reverseStringRecurssion(s,left+1,right-1);
    }
    public Vector<Character> reverseString(Vector<Character> s) {
        int left = 0, right = s.size()-1;
        reverseStringRecurssion(s,left,right);
        return s;
    }
}

class reverseStringUsingRecurssion{
    public static void main(String args[]){
        Solution sol = new Solution();
        Vector<Character> s = new Vector<>();
        s.add('h');
        s.add('e');
        s.add('l');
        s.add('l');
        s.add('o');
        Vector<Character> result = sol.reverseString(s);
        for(char c : result) {
            System.out.print(c + " ");
        }
    }
}
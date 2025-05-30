class Solution {
    public int addDigits(int num) {
        if (num<10) return num;
        int sum = 0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return addDigits(sum);
    }
}

public class addDigits {
    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.addDigits(38)); // 2
        System.out.println(sol.addDigits(123)); // 6
        System.out.println(sol.addDigits(9999)); // 9
    }   
}
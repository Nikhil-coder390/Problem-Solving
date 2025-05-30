class Solution {
    private static boolean isPrime(int num, int x){
        if(x>Math.sqrt(num)) return true;
        if(num%x==0) return false;
        return isPrime(num,x+1);
    }
    public boolean checkPrime(int num) {
        if(1>=num) return false;
        return isPrime(num,2);
    }
}

public class primeOrNot {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int num = 29;
        System.out.println(sol.checkPrime(num)); // true

        num = 15;
        System.out.println(sol.checkPrime(num)); // false
    }    
}
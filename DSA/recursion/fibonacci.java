class Solution {
    public int fib(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        return fib(n-1)+fib(n-2);
    }
}

public class fibonacci {
    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.fib(0)); // 0
        System.out.println(sol.fib(1)); // 1
        System.out.println(sol.fib(2)); // 1
        System.out.println(sol.fib(3)); // 2
        System.out.println(sol.fib(4)); // 3
        System.out.println(sol.fib(5)); // 5
        System.out.println(sol.fib(6)); // 8
        System.out.println(sol.fib(7)); // 13
    }   
}
class Solution {
public:
    int factorial(int n) {
        if(n<=1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
};

#include <iostream>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << sol.factorial(n) << std::endl;
    return 0;
}
class Solution {
public:
    bool isPrime(int n) {
        int c=0;
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
#include <iostream>
#include <cmath>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (sol.isPrime(n)) {
        std::cout << n << " is a prime number.\n";
    } else {
        std::cout << n << " is not a prime number.\n";
    }
    return 0;
}
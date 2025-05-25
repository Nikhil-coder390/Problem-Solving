class Solution {
public:
    int coutNoOfDigits(int n){
        int c = log10(n)+1;
        return c;
    }
    bool isArmstrong(int n) {
       int sum = 0,temp=n;
       int countDigits = coutNoOfDigits(n);
       while(n>0){
        int lastDigit = n%10;
        sum = sum+pow(lastDigit,countDigits);
        n/=10;
       }
       return (sum==temp);
    }
};
#include <iostream>
#include <cmath>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (sol.isArmstrong(n)) {
        std::cout << n << " is an Armstrong number.\n";
    } else {
        std::cout << n << " is not an Armstrong number.\n";
    }
    return 0;
}
class Solution {
public:
    int reverse(int num){
        int newNum = 0;
        while(num>0){
            int lastDigit = num%10;
            newNum = (newNum*10)+lastDigit;
            num/=10;
        }
        return newNum;
    }
    bool isPalindrome(int n) {
        int revNum = reverse(n);
        return (n == revNum);
    }
};
#include <iostream>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (sol.isPalindrome(n)) {
        std::cout << n << " is a palindrome." << std::endl;
    } else {
        std::cout << n << " is not a palindrome." << std::endl;
    }
    return 0;
}
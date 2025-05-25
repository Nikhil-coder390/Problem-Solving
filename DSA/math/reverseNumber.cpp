class Solution {
public:
    int reverseNumber(int n) {
        int temp = n;
        int revDigit = 0;
        while(temp!=0){
            int lastDigit = temp%10;
            revDigit = (revDigit*10)+lastDigit;
            temp/=10;
        }
        return revDigit;
    }
};
#include <iostream>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int reversed = sol.reverseNumber(n);
    std::cout << "Reversed number: " << reversed << std::endl;
    return 0;
}
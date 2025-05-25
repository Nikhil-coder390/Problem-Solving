class Solution {
public:
    int largestDigit(int n) {
        int largeDigit = 0;
        while(n>0){
            int lastDigit = n%10;
            if(lastDigit>largeDigit) largeDigit = lastDigit;
            n/=10;
        }
        return largeDigit;
    }
};
#include <iostream>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = sol.largestDigit(n);
    std::cout << "Largest digit: " << result << std::endl;
    return 0;
}
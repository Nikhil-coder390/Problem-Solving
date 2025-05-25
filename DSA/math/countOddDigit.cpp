class Solution {
public:
    int countOddDigit(int n) {
        int temp = n;
        int count = 0;
        while(temp!=0){
            if(temp%2!=0){
                count++;
            }
            temp/=10;
        }
        return count;
    }
};
#include <iostream>

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = sol.countOddDigit(n);
    std::cout << "Number of odd digits: " << result << std::endl;
    return 0;
}
#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0,prod = 1;
        while(temp>0){
            int lastDigit = temp%10;
            sum += lastDigit;
            prod*=lastDigit;
            temp/=10;
        }
        int res = (n%(sum+prod));
        return ((res==0)?true:false);
    }
};

int main() {
    Solution solution;
    int n = 123; // Example input
    bool result = solution.checkDivisibility(n);
    
    if (result) {
        cout << n << " is divisible by the sum and product of its digits." << endl;
    } else {
        cout << n << " is not divisible by the sum and product of its digits." << endl;
    }

    return 0;
}
class Solution {
public:
    int countDigit(int n) {
        int temp = n;
        int count = 0;
        while(temp!=0){
            count++;
            temp/=10;
        }
        return count;
    }
};
#include <iostream>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits: " << sol.countDigit(n) << endl;
    return 0;
}
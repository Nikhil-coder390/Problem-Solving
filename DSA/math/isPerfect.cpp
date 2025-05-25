class Solution {
public:
    bool isPerfect(int n) {
        int sum = 1;
        if(n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(i!=(n/i)) sum+=(n/i);
            }
        }
        return (sum==n);
    }
};
#include <iostream>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (sol.isPerfect(n))
        cout << n << " is a perfect number." << endl;
    else
        cout << n << " is not a perfect number." << endl;
    return 0;
}
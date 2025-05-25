class Solution {
public:
    int GCD(int n1, int n2){
        while(n1!=0 && n2!=0){
            if(n1>n2) n1 = n1%n2;
            else n2 = n2%n1;
        }
        if(n2==0) return n1;
        else return n2;
    }
    int LCM(int n1,int n2) {
        int gcdofTwo = GCD(n1,n2);
        return ((n1*n2)/(gcdofTwo));
    }
};
#include <iostream>
using namespace std;

int main() {
    Solution sol;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "LCM of " << a << " and " << b << " is " << sol.LCM(a, b) << endl;
    return 0;
}
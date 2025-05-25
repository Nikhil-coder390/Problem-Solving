class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int primeUptoN(int n) {
        int c = 0;
        for(int i=1;i<=n;i++){
            if(isPrime(i)){
                c++;
            }
        }
        return c;
    }
};
#include <iostream>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count = sol.primeUptoN(n);
    cout << "Number of primes up to " << n << " is: " << count << endl;
    return 0;
}
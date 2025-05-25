class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> arr;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
                if(i!=(n/i)) arr.push_back(n/i);
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result = sol.divisors(n);
    cout << "Divisors of " << n << ": ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}
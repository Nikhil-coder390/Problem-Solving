#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int res = 0;
        int n = w.size();
        int cnt = w[0];
        for(int i=1;i<n;i++){
            cnt = max(cnt, w[i]);
            if(cnt>w[i]){
                res+=1;
                if (i==n-1){
                    return res;
                }
                else{
                    cnt=w[i+1];
                }
            }
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution sol;
        cout << sol.maxBalancedShipments(arr) << endl;
    }
    return 0;
}


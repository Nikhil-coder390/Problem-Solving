#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isIncrease(vector<int> &arr, int start, int end){
        for(int i=start;i<end;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isDecrease(vector<int> &arr, int start, int end){
        for(int i=start;i<end;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(isIncrease(nums,0,i) && isDecrease(nums,i,j) && isIncrease(nums,j,n-1)){
                    return true;
                }
            }
        }
        return false;
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
        if (sol.isTrionic(arr)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
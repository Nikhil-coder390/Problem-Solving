#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
    private:
        bool primeNum(int x){
            int c=0;
            if(x<=1) return false;
            for(int i=2;i<=sqrt(x);i++){
                 if(x%i==0){
                    return false;
                }
            }
            return true;
        }
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        if(nums.empty()) return false;
        int maxEle = *max_element(nums.begin(),nums.end());
        vector<int> freq(maxEle+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        bool isPrime = false;
        for(int num:freq){
            if(primeNum(num)) return true;
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
        cout << (sol.checkPrimeFrequency(arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
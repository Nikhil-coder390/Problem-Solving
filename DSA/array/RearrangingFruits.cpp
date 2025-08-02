#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2) {
        unordered_map<int, int> fq1, fq2;
        int minVal = b1[0];
        for(int i=0;i<b1.size();i++){
            fq1[b1[i]]++;
            fq2[b2[i]]++;
            minVal = min(minVal, min(b1[i],b2[i]));
        }
        vector<int> toSwap;
        for(auto it:fq1){
            int cost = it.first;
            int oc1 = it.second, oc2 = fq2[it.first];
            int diff = abs(oc1-oc2);
            if(diff%2==1) return -1;
            diff/=2;
            while(diff--) toSwap.push_back(cost);
            fq1[cost] = 0;
            fq2[cost] = 0;
        }
        for(auto it:fq2){
            int cost = it.first;
            int oc1 = fq1[it.first], oc2 = it.second;
            int diff = abs(oc1-oc2);
            if(diff%2==1) return -1;
            diff/=2;
            while(diff--) toSwap.push_back(cost);
            fq1[cost] = 0;
            fq2[cost] = 0;
        }
        sort(toSwap.begin(),toSwap.end());
        long long res = 0;
        for(int i=0;i<toSwap.size()/2;i++){
            res+=min(2LL*minVal,1LL*toSwap[i]);
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> b1 = {1, 2, 3};
    vector<int> b2 = {3, 2, 1};
    cout << sol.minCost(b1, b2) << endl; // Output: 2
    return 0;
}
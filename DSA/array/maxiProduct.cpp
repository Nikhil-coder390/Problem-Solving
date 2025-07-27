#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref = 1, suf = 1, maxi = 0;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(pref == 0) pref =1;
            if(suf == 0) suf = 1;
            pref *= nums[i];
            suf *= nums[nums.size()-i-1];
            maxi = max(maxi, max(pref,suf));
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum product subarray: " << sol.maxProduct(nums) << endl; // Output: 6
    return 0;
}
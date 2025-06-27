#include <iostream>
#include <vector>
using namespace std;

class Solution5 {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int cuntMax = nums[0], maxSum = nums[0];
        int cuntMin = nums[0], minSum =nums[0];
        for(int i=1;i<nums.size();i++){
            cuntMax = max(nums[i], nums[i]+cuntMax);
            maxSum = max(maxSum, cuntMax);
            cuntMin = min(nums[i], nums[i]+cuntMin);
            minSum = min(minSum, cuntMin);
        }
        return max(abs(maxSum), max(abs(minSum),0));
    }
};

int main(){
    Solution5 sol;
    vector<int> nums;
    for(int i=0;i<7;i++){
        cin >> nums[i];
    }
    cout << sol.maxAbsoluteSum(nums) << endl;
    return 0;
}
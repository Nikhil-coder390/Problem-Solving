#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>seen;
        int left = 0, crntSum = 0, maxSum = 0;
        for(int i=0;i<nums.size();i++){
            while(seen.count(nums[i])){
                seen.erase(nums[left]);
                crntSum -= nums[left];
                left++;
            }
            seen.insert(nums[i]);
            crntSum+= nums[i];
            maxSum = max(maxSum,crntSum);
        }
        return maxSum;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {4, 2, 4, 5, 6};
    cout << sol.maximumUniqueSubarray(nums) << endl; // Output: 17
    return 0;
}
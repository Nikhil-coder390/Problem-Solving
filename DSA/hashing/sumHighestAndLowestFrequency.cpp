class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n = nums.size();
        int maxFreq = 0, minFreq = n;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto it:map){
            if(it.second !=0){
                maxFreq = max(maxFreq,it.second);
                minFreq = min(minFreq,it.second);
            }
        }
        return maxFreq+minFreq;
    }
};
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    int result = sol.sumHighestAndLowestFrequency(nums);
    // Output the result
    printf("%d\n", result);
    return 0;
}
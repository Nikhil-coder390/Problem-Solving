#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                cnt = 0;
            }
        }
        return maxi;
    }
};



int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << result << endl; // Output: 3
    return 0;
}
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> ans;
        int mini = (int) ((nums.size()/3)+1);
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map[nums[i]]==mini){
                ans.push_back(nums[i]);
            }
            if(ans.size()==2) break;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3, 1, 1, 2};
    vector<int> result = solution.majorityElementTwo(nums);
    
    cout << "Majority elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
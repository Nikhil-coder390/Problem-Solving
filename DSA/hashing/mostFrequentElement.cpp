class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        int maxCount = 0, ele = -1;
        for(auto it:map){
            if(it.second>maxCount){
                maxCount = it.second;
                ele = it.first;
            }
            else if(it.second == maxCount){
                ele = min(it.first,ele);
            }
        }
        return ele;
        
    }
};
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 2, 3, 4, 3, 2, 1};
    Solution sol;
    cout << "Most frequent element: " << sol.mostFrequentElement(nums) << endl;
    return 0;
}
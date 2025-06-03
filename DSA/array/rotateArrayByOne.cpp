class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int firstEle = nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i-1] = nums[i];
        }
        nums[nums.size()-1] = firstEle;
    }
};

#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    sol.rotateArrayByOne(nums);
    
    cout << "Array after rotation: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl; // Output: 2 3 4 5 1
    return 0;
}
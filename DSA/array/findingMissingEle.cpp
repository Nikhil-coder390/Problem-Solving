class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;
        for(int i=0;i<nums.size();i++){
            xor1 ^= i+1;
            xor2 ^= nums[i];
        }
        return xor1 ^ xor2;
    }
};

#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {3, 0, 1}; // Example input
    int missingNum = solution.missingNumber(nums);
    
    cout << "Missing number: " << missingNum << endl;

    return 0;
}
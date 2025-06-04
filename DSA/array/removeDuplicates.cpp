class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return (i+1);
    }
};

#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
    int newLength = solution.removeDuplicates(nums);
    
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
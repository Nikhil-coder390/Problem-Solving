class Solution{	
    private:
        int sumRecursion(vector<int>& nums,int left){
            if(left>=nums.size()) return 0;
            return nums[left]+sumRecursion(nums,left+1);
        }
	public:
		int arraySum(vector<int>& nums){
            return sumRecursion(nums,0);
		}
};

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution sol;
    cout << "Sum of array: " << sol.arraySum(nums) << endl;
    return 0;
}
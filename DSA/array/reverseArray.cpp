class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){			
            int left = 0, right = nums.size() - 1;
            while(left < right){
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                left++;
                right--;
            }
            return nums;
		}
};
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> reversed = sol.reverseArray(nums);
    for (int num : reversed) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
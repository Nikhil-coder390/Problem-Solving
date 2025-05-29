class Solution{	
    private:
        static void reverseRecursion(vector<int>& nums,int left, int right){
            if(left>=right){
                return;
            }
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            reverseRecursion(nums,left+1,right-1);
        }
	public:
		vector<int> reverseArray(vector<int>& nums){			
			reverseRecursion(nums,0,nums.size()-1);
            return nums;
		}
};


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution sol;
    vector<int> reversed = sol.reverseArray(nums);
    for (int num : reversed) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
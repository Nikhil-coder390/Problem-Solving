class Solution {
private:
    void reverseArr(vector<int>& arr,int left, int right){
        while(left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArr(nums,0,k-1);
        reverseArr(nums,k,n-1);
        reverseArr(nums,0,n-1);
    }
};

#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    solution.rotateArray(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
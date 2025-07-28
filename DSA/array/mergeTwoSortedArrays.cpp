#include <vector>
#include <iostream>
using namespace std;

class Solution {
    private:
    void swapIfGreater(vector<int>& arr1,vector<int>& arr2, int indx1, int indx2){
        if(arr1[indx1]>arr2[indx2]){
            swap(arr1[indx1],arr2[indx2]);
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = (m+n);
        int gap = (len/2) + (len%2);
        while(gap>0){
            int left = 0;
            int right = left+gap;
            while(right<len){
                if(left<m && right>=m){
                    swapIfGreater(nums1,nums2,left,right-m);
                }
                else if(left>=m){
                    swapIfGreater(nums2,nums2,left-m,right-m);
                }
                else{
                    swapIfGreater(nums1,nums1,left,right);
                }
                left++, right++;
            }
            if(gap==1) break;
            gap = (gap/2)+(gap%2);
        }
        for(int i=m;i<m+n;i++){
            nums1[i] = nums2[i-m];
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3; // Number of elements in nums1
    int n = 3; // Number of elements in nums2

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}   
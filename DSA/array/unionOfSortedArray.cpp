class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i=0, j=0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(nums.size()==0 || nums.back() != nums1[i]){
                    nums.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(nums.size()==0 || nums.back() != nums2[j]){
                    nums.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<n1){
            if(nums.size()==0 || nums.back() != nums1[i]){
                    nums.push_back(nums1[i]);
            }
            i++;
        }
        while(j<n2){
            if(nums.size()==0 || nums.back() != nums2[j]){
                    nums.push_back(nums2[j]);
            }
            j++;
        }
        return nums;
    }
};


#include <iostream>
#include <vector>
using namespace std;

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 4, 5};
    vector<int> nums2 = {2, 3, 5, 6};
    
    vector<int> result = solution.unionArray(nums1, nums2);
    
    cout << "Union of sorted arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
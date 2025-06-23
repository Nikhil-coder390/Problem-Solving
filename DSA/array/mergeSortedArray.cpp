/*
88. Merge Sorted Array

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Input Format:
nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

Output:
[1,2,2,3,5,6]

Approach:
 -> We will be taking 3 variables i, j, and k.
 -> Initialize var i with nums1.length-1 i.e, last index of nums1
 -> var j with nums2.length-1 i.e, last index of nums2
 -> var k with nums1.length + nums2.length -1 i.e last index in nums1 array of size m+n
 -> Now we iterate while decreasing i and j when j is greater than or equal to 0. 
   - Now we place larger element at last index of nums1 with size m+n and then dercement the var's
*/


#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> nums1 = {1,2,3,4,5,0,0,0};
    int m = 5;
    int n = 3;
    vector<int> nums2 = {2,3,4};
    sol.merge(nums1,m,nums2,n);
    for(int i=0;i<nums1.size();i++){
        cout << nums1[i] << " ";
    }
    return 0;
}
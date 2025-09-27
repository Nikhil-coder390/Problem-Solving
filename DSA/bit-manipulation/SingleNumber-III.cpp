#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        // your code goes here
        int XOR = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            XOR ^= nums[i]; // Leaves with the XOR of unique elements
        }
        int rightmost = (XOR & (XOR - 1)) ^ XOR;
        int XOR1 = 0, XOR2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & rightmost)
            {
                XOR1 ^= nums[i];
            }
            else
            {
                XOR2 ^= nums[i];
            }
        }
        if (XOR1 < XOR2)
            return {XOR1, XOR2};
        return {XOR2, XOR1};
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> result = s.singleNumber(nums);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
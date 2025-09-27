#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xOr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xOr ^= nums[i];
        }
        return xOr;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}
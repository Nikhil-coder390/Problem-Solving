#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // your code goes here
        int ones = 0, twos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ones = (ones ^ nums[i]) & ~twos;
            twos = (twos ^ nums[i]) & ~ones;
        }
        return ones;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 3, 2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}
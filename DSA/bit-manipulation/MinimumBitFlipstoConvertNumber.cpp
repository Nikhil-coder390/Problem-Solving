#include <iostream>
using namespace std;
class Solution
{
public:
    int minBitsFlip(int start, int goal)
    {
        int num = start ^ goal;
        int cnt = 0;
        for (int i = 0; i < 32; i++)
        {
            cnt += (num & 1);
            num = num >> 1;
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    int start = 10, goal = 7;
    cout << s.minBitsFlip(start, goal) << endl;
    return 0;
}
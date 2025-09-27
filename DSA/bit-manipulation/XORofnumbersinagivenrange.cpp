#include <iostream>
using namespace std;

class Solution
{
private:
    int XORtillN(int x)
    {
        if (x % 4 == 1)
            return 1;
        if (x % 4 == 2)
            return x + 1;
        if (x % 4 == 3)
            return 0;
        return x;
    }

public:
    int findRangeXOR(int l, int r)
    {
        return XORtillN(l - 1) ^ XORtillN(r);
    }
};

int main()
{
    Solution s;
    int l = 3, r = 9;
    cout << s.findRangeXOR(l, r) << endl;
    return 0;
}
#include <cmath>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;
        return (n & (n - 1)) == 0 && n % 3 == 1;
    }
};

int main()
{
    Solution sol;
    cout << sol.isPowerOfFour(16) << endl; // Output: 1 (true)
    cout << sol.isPowerOfFour(5) << endl;  // Output: 0 (false)
    return 0;
}
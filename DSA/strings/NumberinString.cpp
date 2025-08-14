#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string ans = "";
        int n = num.size();
        for (int i = 0; i <= n - 3; i++)
        {
            if (num[i] == num[i + 1] && num[i] == num[i + 2])
            {
                string tri = num.substr(i, 3);
                if (ans == "" | tri > ans)
                {
                    ans = tri;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.largestGoodInteger("6777133339") << endl;
    return 0;
}
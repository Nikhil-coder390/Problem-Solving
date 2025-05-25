#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern10(int n) {
            for (int i = 1; i <= 2*n-1; i++)
            {
                int stars = i;
                if (i > n) {
                    stars = 2*n - i;
                }
                for (int j = 1; j <= stars; j++)
                {
                    cout<< "*";
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern10(n); // Call the function with the input
    return 0;
}
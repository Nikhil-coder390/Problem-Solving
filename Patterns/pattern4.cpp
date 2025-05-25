#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern4(int n) {
            for (int i = 1; i <= n; i++)
            {
                for(int j=1;j<=i;j++){
                    cout<<i;
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern4(n); // Call the function with the input
    return 0;
}
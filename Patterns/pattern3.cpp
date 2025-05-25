#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern3(int n) {
            for (int i = 1; i <= n; i++)
            {
                for(int j=1;j<=i;j++){
                    cout<<j;
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern3(n); // Call the function with the input
    return 0;
}
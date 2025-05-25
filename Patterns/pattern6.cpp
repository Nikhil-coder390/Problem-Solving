#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern6(int n) {
            for (int i = 1; i <= n; i++)
            {
                for(int j=n;j>=i;j--){
                    cout<<n-j+1;
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern6(n); // Call the function with the input
    return 0;
}
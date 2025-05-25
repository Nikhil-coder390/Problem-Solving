#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern18(int n) {
            char ch = 'A'+n-1;
            for (int i = 0; i < n; i++)
            {
                 // Start from 'E' and go downwards
                for(char j=ch-i;j<=ch;j++){
                    cout<<j;
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern18(n); // Call the function with the input
    return 0;
}
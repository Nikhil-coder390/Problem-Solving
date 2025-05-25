#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern16(int n) {
            for (int i = 1; i <= n; i++)
            {
                char num = 'A'+i-1;
                for(int j=1;j<=i;j++){
                    cout<<num<<" ";
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern16(n); // Call the function with the input
    return 0;
}
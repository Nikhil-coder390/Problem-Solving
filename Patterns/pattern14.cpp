#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern14(int n) {
            for (int i = 1; i <= n; i++)
            {
                char num = 'A';
                for(int j=1;j<=i;j++){
                    cout<<num<<" ";
                    num = num+1;
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern14(n); // Call the function with the input
    return 0;
}
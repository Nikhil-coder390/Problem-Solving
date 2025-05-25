#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern7(int n) {
            for (int i = 1; i <= n; i++)
            {
                for(int j=1;j<=n-i;j++){
                    cout<<" ";
                }
                for(int j=1;j<=2*i-1;j++){
                    cout<<"*";  
                }
                for(int j=1;j<=n-i;j++){
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern7(n); // Call the function with the input
    return 0;
}
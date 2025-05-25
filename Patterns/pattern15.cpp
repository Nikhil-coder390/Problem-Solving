#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern15(int n) {
            for (int i = 0; i < n; i++)
            {
                char num = 'A';
                for(int j=1;j<=n-i;j++){
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
    obj.pattern15(n); // Call the function with the input
    return 0;
}
#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern20(int n) {
            for (int i = 1; i <= 2*n-1; i++)
            {
                int start = (i <= n) ? i : 2*n-i;
                int spaces = n - start;
                for(int j=1;j<=start;j++){
                    cout<<"*";
                }
                for(int j=1;j<=spaces;j++){
                    cout<<" ";
                }
                for(int j=1;j<=spaces;j++){
                    cout<<" ";
                }
                for(int j=1;j<=start;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }   
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern20(n); // Call the function with the input
    return 0;
}
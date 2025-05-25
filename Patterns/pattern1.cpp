#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern1(int n) {
            for (int i = 1; i <= 5; i++)
            {
                for(int j=1;j<=5;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern1(n); // Call the function with the input
    return 0;
}
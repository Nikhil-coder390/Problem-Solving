#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern22(int n) {
            for (int i = 0; i < 2*n-1; i++)
            {
                for(int j=0;j<2*n-1;j++){
                    int top = i,bottom=j;
                    int left=(2*n-2)-i,right=(2*n-2)-j;
                    cout<<n-min(min(top,bottom),min(left,right));
                }
                cout<<endl;
            }
        }   
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern22(n); // Call the function with the input
    return 0;
}
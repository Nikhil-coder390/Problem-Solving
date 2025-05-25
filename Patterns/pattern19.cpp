#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern19(int n) {
            normalPattern(n);
            invertPattern(n); 
        }
        void normalPattern(int n){
            for (int i = 0; i < n; i++)
            {
                for(int j=1;j<=n-i;j++){
                    cout<<"*";
                }
                for(int j=1;j<=i*2;j++){
                    cout<<" ";
                }
                for(int j=1;j<=n-i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        void invertPattern(int n){
            for (int i = 0; i < n; i++)
            {
                for(int j=1;j<=i+1;j++){
                    cout<<"*";
                }
                for(int j=1;j<=(2*n-2)-i*2;j++){
                    cout<<" ";
                }
                for(int j=1;j<=i+1;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern19(n); // Call the function with the input
    return 0;
}
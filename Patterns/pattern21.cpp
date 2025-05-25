#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern21(int n) {
            for (int i = 1; i <= n; i++)
            {
                if(i==1||i==n){
                    for(int j=1;j<=n;j++){
                        cout<<"*";
                    }
                }
                else{
                    for(int j=1;j<=n;j++){
                        if(j==1||j==n){
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
                }
                cout<<endl;
            }
        }   
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern21(n); // Call the function with the input
    return 0;
}
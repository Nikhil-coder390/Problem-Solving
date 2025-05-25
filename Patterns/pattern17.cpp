#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern17(int n) {
            for (int i = 0; i < n; i++)
            {
                for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }
                char num = 'A';
                int breakpoint = (2*i+1)/2;
                for(int j=1;j<=2*i+1;j++){
                    cout<<num;
                    if(j<=breakpoint){
                        num++;
                    }
                    else{
                        num--;
                    }
                }
                for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern17(n); // Call the function with the input
    return 0;
}
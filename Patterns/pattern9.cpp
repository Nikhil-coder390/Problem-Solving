#include "iostream";
using namespace std;
class Solution {
    private:
        static void normalPyramid(int n){
            for (int i = 1; i <=n; i++)
                {
                    for(int j=1;j<=n-i;j++){
                        cout<<" ";
                    }
                    for(int j=1;j<2*i;j++){
                        cout<<"*";
                    }
                    for(int j=1;j<=n-i;j++){
                        cout<<" ";
                    }
                    cout<<endl;
                }
        }
        static void invertedPyramid(int n) {
            for (int i = 1; i <=n; i++)
                {
                    for(int j=1;j<i;j++){
                        cout<<" ";
                    }
                    for(int j=1;j<=2*(n-i)+1;j++){
                        cout<<"*";
                    }
                    for(int j=1;j<i;j++){
                        cout<<" ";
                    }
                    cout<<endl;
                }
        }
    public:
        static void pattern9(int n){
            normalPyramid(n);
            invertedPyramid(n);
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern9(n); // Call the function with the input
    return 0;
}
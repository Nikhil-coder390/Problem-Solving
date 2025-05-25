#include "iostream";
using namespace std;
class Solution {
    public:
        void pattern11(int n) {
            for (int i = 1; i <= 5; i++)
            {
                int start = 1;
                if (i%2==0) {
                    start = 0;
                }
                for (int j = 1; j <= i; j++)
                {
                    cout<< start;
                    start = 1 - start; // Toggle between 0 and 1
                }
                cout<<endl;
            }
        }
    };
int main() {
    Solution obj;
    int n = 5; // Example input
    obj.pattern11(n); // Call the function with the input
    return 0;
}
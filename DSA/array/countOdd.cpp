class Solution{
public:
    int countOdd(int arr[], int n){
          int c = 0;
          for(int i=0;i<n;i++){
            if(arr[i]%2==1) c++;
          }
          return c;
    }
};

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution sol;
    cout << "Number of odd elements: " << sol.countOdd(arr, n) << endl;
    return 0;
}
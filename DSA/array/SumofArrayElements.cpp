class Solution{
public:
	int sum(int arr[], int n) {
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
	}
};
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.sum(arr, n) << endl;
    return 0;
}
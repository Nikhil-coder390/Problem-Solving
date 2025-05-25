class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) return false;
        }
        return true;
    }
};

#include <iostream>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(sol.arraySortedOrNot(arr, n)) {
        cout << "The array is sorted.\n";
    } else {
        cout << "The array is not sorted.\n";
    }
    return 0;
}
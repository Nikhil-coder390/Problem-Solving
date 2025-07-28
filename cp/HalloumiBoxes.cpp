/*
1903A - Halloumi Boxes
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<int> copyArr = arr;
        sort(copyArr.begin(), copyArr.end());
        if(copyArr == arr || k>1) cout<< "YES" << endl;
        else cout << "NO" << endl;
        t--;
    }
    return 0;
}
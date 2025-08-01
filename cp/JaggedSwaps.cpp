#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t>0)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans(n);
        ans = arr;
        sort(ans.begin(), ans.end());
        for(int i=1;i<n;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        if(ans == arr){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        t--;
    }
    
}
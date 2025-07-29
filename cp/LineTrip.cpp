#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        long long n, x;
        cin >> n >> x;
        vector<long long> pointArr(n);
        pointArr.push_back(0);
        for(int i = 0; i < n; i++){
            long long point;
            cin >> point;
            pointArr.push_back(point);
        }
        pointArr.push_back(x);
        n = pointArr.size();
        long long maxDist = INT_MIN;
        for(int i=1;i<n;i++){
            if(i == n-1){
                maxDist = max(maxDist, 2*(pointArr[i]-pointArr[i-1]));
            }
            else{
                maxDist = max(maxDist, pointArr[i]-pointArr[i-1]);
            }
        }
        cout << maxDist << endl;
        t--;
    }
    return 0;
}
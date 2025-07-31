#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        bool vanya = false;
        for(int i=1;i<=10;i++){
            if(((n+1)%3)==0 || ((n-1)%3) == 0){
                vanya = true;
                break;
            }
        }
        if(vanya){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
        t--;
    }
}
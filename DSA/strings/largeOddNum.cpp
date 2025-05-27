#include <string>
#include <iostream>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int j=-1, n = s.size();
        for(int i=n-1;i>=0;i--){
            if((s[i]-'0')%2 == 1){
                j = i;
                break;
            }
        }
        if(j==-1) return "";
        int i = 0;
        while(i<=j){
            if(s[i]!='0') break;
            i=i+1;
        }
        return s.substr(i,j-i+1);
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    string res = sol.largeOddNum(s);
    if(res.empty())
        cout << "-1" << endl;
    else
        cout << res << endl;
    return 0;
}

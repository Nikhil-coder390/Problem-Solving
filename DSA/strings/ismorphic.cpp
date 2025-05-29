class Solution {
public:
    bool isomorphicString(string s, string t) {
    	int n = s.size()-1;
        int sMap[256] = {0};
        int tMap[256] = {0};
        for(int i=0;i<=n;i++){
            if(sMap[s[i]]!=tMap[t[i]]) return false;
            sMap[s[i]] = i + 1;
            tMap[t[i]] = i + 1;
        }
        return true;
    }
};

#include <iostream>
#include <string>
using namespace std;

int main() {
    Solution sol;
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if (s.length() != t.length()) {
        cout << "False" << endl;
        return 0;
    }
    bool result = sol.isomorphicString(s, t);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
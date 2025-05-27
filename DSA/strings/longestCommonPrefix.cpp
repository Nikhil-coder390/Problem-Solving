#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        string longestCommonPrefix(vector<string>& strs){
            if(strs.empty()) return "";
            sort(strs.begin(), strs.end());
            string first = strs.front();
            string last = strs.back();
            int i = 0;
            while(i < min(first.size(), last.size())){
                if(first[i] != last[i]) break;
                i++;
            }
            return first.substr(0, i);
        }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;
    return 0;
}
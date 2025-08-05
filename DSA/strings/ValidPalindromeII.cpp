#include <string>
#include <iostream>
using namespace std;

class Solution {
private:
    bool isPalindrome(string str, int left, int right){
        while(left<right){
            if(str[left++] != str[right--]) return false;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int l = 0, r=s.size()-1;
        while(l<r){
            if(s[l] != s[r]) {
                return isPalindrome(s,l+1, r) || isPalindrome(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};


int main() {
    Solution sol;
    string s = "abca";
    bool result = sol.validPalindrome(s);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}
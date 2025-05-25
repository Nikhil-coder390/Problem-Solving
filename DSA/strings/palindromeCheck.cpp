class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int l = 0, r = s.size()-1;
            while(l<r){
                if(s[l]!=s[r]) return false;
                l++;
                r--;
            }
            return true;
		}
};
#include <iostream>
#include <string>
using namespace std;

int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (sol.palindromeCheck(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
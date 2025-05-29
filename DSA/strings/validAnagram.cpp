class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			if(s.size() != t.size()) return false;
            int count[26] = {0};
            for(int i=0;i<s.size();i++){
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }
            for(int c:count) {
                if(c!=0) return false;
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
    if (sol.anagramStrings(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}
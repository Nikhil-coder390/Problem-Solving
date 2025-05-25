class Solution{	
	public:		
		void reverseString(vector<char>& s){
			int l=0, r=s.size()-1;
            while(l<r){
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
		}
};
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    sol.reverseString(s);
    for(char c : s) {
        cout << c;
    }
    cout << endl;
    return 0;
}
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.size()!=goal.size()) return false;
            string doubledstr = s + s;
            return doubledstr.find(goal) != string::npos;
		}
};

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, goal;
    cout << "Enter original string: ";
    cin >> s;
    cout << "Enter goal string: ";
    cin >> goal;
    Solution sol;
    if (sol.rotateString(s, goal)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
class Solution{
    private:
        static bool comparator(pair<int,char>p1,pair<int,char>p2){
            if(p1.first>p2.first) return true;
            if(p1.first<p2.first) return false;
            return p1.second<p2.second;
        }	
	public:
		vector<char> frequencySort(string& s){
            pair<int, char> freq[26];
            for(int i =0;i<26;i++){
                freq[i] = {0,i+'a'};
            }
            for(char ch:s){
                freq[ch-'a'].first++;
            }
            sort(freq,freq+26,comparator);
            vector<char>arr;
            for(int i=0;i<26;i++){
                if(freq[i].first>0) arr.push_back(freq[i].second);
            }
            return arr;
		}
};

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    Solution sol;
    string s;
    cin >> s;
    vector<char> result = sol.frequencySort(s);
    for(char c : result) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
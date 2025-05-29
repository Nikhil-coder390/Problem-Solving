class Solution{	
	public:
		int NnumbersSum(int N){
            if (N<1){
                return 0;
            }
            return N + NnumbersSum(N-1);
		}
};
#include <iostream>
using namespace std;

int main(){
    Solution sol;
    int N;
    cin >> N;
    cout << sol.NnumbersSum(N) << endl;
    return 0;
}
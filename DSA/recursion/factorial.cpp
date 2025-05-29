class Solution{	
	public:
		long long int factorial(int n){
			if(n<=1) return 1;
            return n*factorial(n-1);
		}
};

#include <iostream>
using namespace std;

int main(){
    Solution sol;
    int N;
    cin >> N;
    cout << sol.factorial(N) << endl;
    return 0;
}
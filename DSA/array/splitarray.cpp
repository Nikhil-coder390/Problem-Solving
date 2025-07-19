#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

class Solution {
    private:
        bool isPrime(int x){
            int c=0;
            if(x<=1) return false;
            for(int i=2;i<=sqrt(x);i++){
                 if(x%i==0){
                    return false;
                }
            }
            return true;
        }
public:
    long long splitArray(vector<int>& nums) {
        vector<int> a;
        vector<int>b;
        for(int i=0;i<nums.size();i++){
            if(isPrime(i)){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        long long sum1 = 0, sum2 = 0;
        for(int i=0;i<a.size();i++){
            sum1+=a[i];
        }
        for(int i=0;i<b.size();i++){
            sum2+=b[i];
        }
        return llabs(sum1-sum2);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5}; // Example input
    long long result = solution.splitArray(nums);
    
    cout << "Difference between sums: " << result << endl;

    return 0;
}
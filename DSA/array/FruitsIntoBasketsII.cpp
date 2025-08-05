#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int ans = n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(fruits[i]<=baskets[j]){
                    ans--;
                    baskets[j] = 0;
                    break;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> fruits = {1, 2, 3, 4};
    vector<int> baskets = {2, 3, 5};
    int result = sol.numOfUnplacedFruits(fruits, baskets);
    cout << "Number of unplaced fruits: " << result << endl; // Output: 1
    return 0;
}
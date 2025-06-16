class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    Solution sol;
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    sol.rotateMatrix(matrix);
    
    cout << "Rotated matrix:\n";
    for(const auto& row : matrix) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}
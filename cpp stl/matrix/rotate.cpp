#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();//row
    int m = matrix[0].size();//col

    // Step 1: Transpose
    for(int i =0; i<n; i++){
        for(int j = i; j<m; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for(int i =0 ; i<n; i++){
        for(int j = 0; j<m/2; j++){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    for (auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
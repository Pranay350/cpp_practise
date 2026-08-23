#include <bits/stdc++.h>
using namespace std;

void setMatrixZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size(); //row    
    int m = matrix[0].size();   //column

    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j]== 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // If the row or column is marked, set cell to zero
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    setMatrixZeroes(matrix);

    for (auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void setMatrixZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();    // number of rows
    int m = matrix[0].size(); // number of columns

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                int row = i;
                int column = j;
                for (row = 0; row < n; row++)
                {
                    if (matrix[row][j] != 0)
                    {
                        matrix[row][j] = -1;
                    }
                }
                for (column = 0; column < m; column++)
                {
                    if (matrix[i][column] != 0)
                    {
                        matrix[i][column] = -1;
                    }
                }
            }
        }
       
    }
     for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == -1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1}};

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
#include <bits/stdc++.h>
using namespace std;

long long nCr(long long n, long long r){
    long long ncr = 1;
    for(int i =0; i<r; i++){
        ncr = ncr*(n-i);
        ncr = ncr/(i+1);
    }


    return ncr;
}

vector<int> pascal(int numRow, vector<int> triangle){

   vector<vector<int>> triangle;

    for (int i = 0; i < numRows; i++) {
        vector<int> row;
        for (int j = 0; j <= i; j++) {
            row.push_back(nCr(i, j));
        }
        triangle.push_back(row);
    }

    return triangle;



}


int main(){









    return 0;
}
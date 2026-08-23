#include <bits/stdc++.h>
using namespace std;

int main(){
    std::vector<int> arr = {1, 2, 4, 5};
    int n = 5;

    int sum = n*(n+1)/2;
    int temp = 0;
    for(int i = 0; i<n-1; i++){
        temp = temp + arr[i];
    }

std::cout << sum - temp << std::endl;

    return 0;
}
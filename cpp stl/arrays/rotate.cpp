#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5,6};
    int n = arr.size();
    int k = 2;

    // your logic here
    int j = n-1;
    for(int i = 0; i<n/2; i++){
        swap(arr[i],arr[j]);
        j--;
    }
    j = n-1;    
    for(int i = k; i<(n-k+1)/2; i++ ){
        swap(arr[i],arr[j]);
        j--;
    }

    for (int x : arr) cout << x << " ";
    return 0;
}
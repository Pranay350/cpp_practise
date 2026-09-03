#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
    
vector<int> nextPermutation(vector<int>& arr) {
    int n = arr.size();
    
    // Step 1: find index i from right where arr[i] < arr[i+1]
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i+1]) {
        i--;
    }
    
    // Step 2: find j from right where arr[j] > arr[i], swap
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        swap(arr[i], arr[j]);
    }
    
    // Step 3: reverse suffix after i
    reverse(arr.begin() + i + 1, arr.end());
    
    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = nextPermutation(arr);
    for (int x : ans)
        cout << x << " ";
    return 0;
}
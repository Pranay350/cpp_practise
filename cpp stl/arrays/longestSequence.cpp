#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>& arr, int val) {
    for(int x : arr) {
        if(x == val) return true;
    }
    return false;
}

int main() {
    vector<int> arr;
    for(int i = 0; i < 100000; i++) {
        arr.push_back(rand() % 1000000);
    }
    int n = arr.size();
    int maxlen = 1;

    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        int len = 1;
        while(linearSearch(arr, curr+1)) {
            curr++;
            len++;
        }
        maxlen = max(maxlen, len);
    }

    cout << maxlen;
    return 0;
}
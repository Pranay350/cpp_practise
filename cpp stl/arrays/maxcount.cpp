#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    int maxCount = -1;
    vector<int> arr = {1, 1, 1, 1, 0, 1, 1};

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]) {
            count++;
            if(count >= maxCount) maxCount = count;
        } else {
            count = 0;
        }
    }

    cout << maxCount;
    return 0;
}
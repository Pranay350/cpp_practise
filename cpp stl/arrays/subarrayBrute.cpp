#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3};
int k = 6;
    int maxLen = 0;
    int len = 0;
    for(int i = 0 ; i<arr.size(); i++){
        if(len>=maxLen){
            maxLen = len;
        }
        int sum = 0;
        for(int j = i; j<arr.size(); j++){
            sum+=arr[j];
            if(sum==k){
                len = j - i + 1;
            }

        }
    }
    cout << maxLen << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    vector<int> arr = {3, 2, 2, 3};
    int val = 3;
    int n = arr.size();
    int occur = 0;
int j = 0;

for(int i = 0; i<n; i++){
    if(arr[i]!=val){
        arr[j] = arr[i];
        j++;

    }else{occur++;}


}

cout << "New length: " << j << "\n";
for(int i = 0; i < j; i++) {
    cout << arr[i] << " ";
}
    return 0;
}
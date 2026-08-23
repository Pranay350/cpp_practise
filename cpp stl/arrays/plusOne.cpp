#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,9};
    int n = arr.size();
    int i = n-1;
    while(i>=0){
        if(arr[i]==9){
            arr[i]= 0;
            i--;

        }else{arr[i]++;
        break;}

    
    }
    if(arr[0]==9){
        arr[0]=0;
    }
    if(arr[0]==0 && arr[1]==0){
                arr.insert(arr.begin(),1);

    }

    for(int j = 0; j<arr.size(); j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
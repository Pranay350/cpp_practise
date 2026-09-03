#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,32,1,33,23,0, 6, 13, 2, 7};
    int n = arr.size();
    vector<int> leaders;
    int leader = arr[arr.size()-1];
    leaders.push_back(leader);
    for(int i = n-2; i>=0; i--){
        if(arr[i]>leader){
                    leaders.push_back(arr[i]);
        leader = arr[i] ;     
        }
    }
int j = 0;
    while(j<leaders.size()){
        cout<<leaders[j]<<" ";
        j++;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void nge(vector<int>& arr){
    stack<int> st;
    int n = arr.size();
    vector<int> result(n);

    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        result[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);   // push original value, not overwritten one
    }
    arr = result;
}

int main(){
    vector<int> arr = {4, 5, 2, 25};
    nge(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
     int j = high;

     while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }

        if(i<j){
            swap(arr[i], arr[j]);
        }
     }

     swap(arr[low], arr[j]);

    return j;
}
void qs(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}


int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

    qs(arr, 0, arr.size() - 1);

    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;

    while (start <= end)
    {
            mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;


            
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }

    return arr[start]; // for lower bound
}

int main(){
    vector<int> v = {1,3,6,67};

    int a = BinarySearch(v, 25);
    cout<<a;
}
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    int ans = 0;

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

        if (arr[mid] >= target)
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans; // for lower bound
}

int main(){
    vector<int> v = {10,20,30,40,50};

    int a = upperBound(v,25);
    cout<<a;
}
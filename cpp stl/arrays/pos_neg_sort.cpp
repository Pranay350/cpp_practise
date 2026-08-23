#include <bits/stdc++.h>
using namespace std;
int pos = 0;
int neg = 1;

vector<int> rearrange(vector<int> &arr)
{
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        if (arr[i] < 0)
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = rearrange(arr);
    for (int x : ans)
        cout << x << " ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ve
    int n = arr.size();
    int len = 1;
    int maxlen = 1;
    if (n == 0)
        return 0;
    unordered_set<int> st(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (!st.count(arr[i] - 1))
        {
            int curr = arr[i];
            len = 1;
            while (st.count(curr + 1))
            {
                curr++;
                len++;
            }
            if (len > maxlen)
            {
                maxlen = len;
            }
        }
    }
cout<<maxlen;
    return 0;
}
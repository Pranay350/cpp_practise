#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 6;
    int b = 6;
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < a && j < b)
    {
        if (arr1[i] < arr2[j])
        {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (unionArr.empty() || unionArr.back() != arr2[j])
                unionArr.push_back(arr2[j]);
            j++;
        }
    }                          // ← main while ends here

    while (i < a) {
        if (unionArr.back() != arr1[i])
            unionArr.push_back(arr1[i]);
        i++;
    }

    while (j < b) {
        if (unionArr.back() != arr2[j])
            unionArr.push_back(arr2[j]);
        j++;
    }

    for (int x : unionArr)
        cout << x << " ";

    return 0;
}
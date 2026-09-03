#include <bits/stdc++.h>

int main()
{
    std::vector<int> temp;
    std::vector<int> arr1 = {3, 4, 6, 8};
    std::vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] != arr2[j])
        {
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                j++;
            }
        }
        else
        {
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for (int x = 0; x < temp.size(); x++)
    {
        std::cout << temp[x] << " ";
    }

    std::cout << std::endl;  // add this

    return 0;
}
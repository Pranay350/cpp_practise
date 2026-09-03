#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++)
    {
        // 1. compute complement
        int compliment = target - nums[i];

        // 2. check if complement exists in mp
        if (mp.find(compliment) != mp.end())
        {
            int found = mp[compliment];
            return {found, i};
        }
        // 3. if not found, insert nums[i] with its index

        else
        {
            mp[nums[i]] = i;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<int> nums = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result = twoSum(nums, 6);

    cout << result[0] << " " << result[1] << endl;
}
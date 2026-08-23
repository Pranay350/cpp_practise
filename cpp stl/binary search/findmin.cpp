#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to search for target using binary search in rotated sorted array
    int search(vector<int> &nums)
    {

        // Set the search space to entire array
        int low = 0;
        int high = nums.size() - 1;

        while (low < high)
        {

            int mid = (low + high) / 2;

            if (nums[mid] > nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }


        }

                return nums[low];

    }

};

    // Driver code
    int main()
    {
        vector<int> nums = {4, 5, 6, 7, 2};

        Solution obj;
        int result = obj.search(nums);

        cout << result << endl;

        return 0;
    }

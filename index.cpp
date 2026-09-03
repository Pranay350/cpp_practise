#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int left = 0;
        int right = 0, sum = 0, maxLen = 0;
        int n = nums.size();
        int len=1;

     for(right; right<n; right++){
        sum+=nums[right];

        while(sum>k){

            sum-=nums[left];
            left++;

        }

        if(sum == k){
        maxLen = max(maxLen, right - left + 1);
}
     }
        return maxLen;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 1, 1, 2, 3};
    int k = 3;

    int result = sol.longestSubarray(nums, k);
    cout << "Longest subarray length: " << result << endl;

    return 0;
}
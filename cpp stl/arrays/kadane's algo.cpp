#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& nums) {
     int maxSum = INT_MIN, currentSum = 0;
     vector<int> arr;
    
    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        if(currentSum > maxSum) maxSum = currentSum;
        if(currentSum < 0) currentSum = 0;
        arr.push_back(nums[i]);

    }
    
    return maxSum;
}

int main() {
    vector<int> nums = {-2, -1,-3,5,2,-1,9,-6};
    cout << maxSubarraySum(nums) << endl;
    for(int j = 0; j<arr.size(); j++){
        cout<<arr[j]<<" ";
    }
}
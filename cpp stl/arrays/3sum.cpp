#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        int l=0, r=0;
        for(int i = 0; i < n; i++){
            l=i+1;
            r = n-1;
            int target = -nums[i];
            while(l<r){
                if(nums[l] + nums[r] == target){
                    break;
                }
               if(nums[l]+nums[r]>target){
                l++;
               }
               else{
                r--;
               }
            }
        
        }
    

        return result;
    }
};
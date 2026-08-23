//hashing
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int,int> mpp;
    for(int i = 0; i<nums.size();i++){
        mpp[nums[i]]++;
    }

    // idk the  iterator syntax, i find it hard to remember
    for (auto& it : mpp) {
    // it.first  → key
    // it.second → value
    if(it.second> nums.size()/2){
        return it.first;
    }
}
return -1;
}

int main() {
    vector<int> nums = {3, 2, 3};
    cout << majorityElement(nums) << endl;  // expected: 3

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums2) << endl;  // expected: 2

    return 0;
}
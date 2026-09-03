#include <bits/stdc++.h>
using namespace std;

void insort(vector<int>& nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && nums[j] < nums[j-1]){
            swap(nums[j], nums[j-1]);
            j--;
        }
        j--;
    }

}

int main()
{
    vector<int> nums = {5, 2, 9, 1, 5, 6, 0, 3, 4, 8, 7};
    insort(nums);
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}
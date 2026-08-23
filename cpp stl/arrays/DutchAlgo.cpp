#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b=temp;
}
vector<int> dutch(vector<int> &nums){
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;

    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }

    }

return nums;

}
int main(){
    vector<int> nums = {0,1,2,1,0,2,1,0};
    sort(nums.begin)
    vector<int> result = dutch(nums);
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
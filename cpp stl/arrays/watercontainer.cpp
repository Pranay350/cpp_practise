#include <bits/stdc++.h>
using namespace std;


int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        // TODO: compute area using min(height[left], height[right]) * (right - left)
        int area = min(height[left], height[right]) * (right - left);
        // TODO: update maxWater
        if(area>maxWater){
            maxWater = area;
        }
        // TODO: move the pointer with smaller height inward
        if(min(height[left], height[right]) == height[left]){
            left++;
        }else{right--;}

    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // expected output: 49

    cout << "Max Water: " << maxArea(height) << endl;

    return 0;
}
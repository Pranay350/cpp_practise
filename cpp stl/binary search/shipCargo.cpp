#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sum(vector<int> &wieghts){
        int n = 0;
        for(int i = 0; i<wieghts.size(); i++){
            n += wieghts[i];
        }
        return n;
    }

    int NUMdays(vector<int>& weights, int capacity){
    int days = 1;
    int load = 0;
    
    for(int i = 0; i < weights.size(); i++){
        if(load + weights[i] > capacity){
            days++;

            
            load = 0;
        }
        load += weights[i];
    }
    
    return days;
}

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = sum(weights);
        int mid = (low + (high - low))/2;
        int ans = -1;
        int numDays = NUMdays(weights, mid);


    while(low<=high){
         if(numDays()<=days){
            ans = mid;
            high = mid - 1;
        }
        if(numDays>days){
            low = mid + 1;;
        }
    }
       return ans;

    }
};
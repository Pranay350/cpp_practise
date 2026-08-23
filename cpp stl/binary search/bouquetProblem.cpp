#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    int possibleBouquets(vector<int>& bloomDay, int day, int k) {
        // count consecutive bloomed flowers, form bouquets of size k
        int num = 0;
        int flower = 0;
        for(int i = 0; i<bloomDay.size(); i++){
           
            if(bloomDay[i]<=day){
                flower++;
            }else{flower = 0;}

             if(flower%k == 0 && flower != 0 ){
                num++;
            }
        }

        // return total bouquets possible
        return num;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = (long long)m * k;
        if (need > bloomDay.size()) return -1;
        
        int lo = *min_element(bloomDay.begin(), bloomDay.end());
        int hi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int bouquets = possibleBouquets(bloomDay, mid, k);
            
            if (bouquets < m){
                lo = mid + 1;
            } 
            else{
                hi = mid-1; 
                ans = mid;
            }
        }
        return ans;
    }
};


int main(){
    Solution sol;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3, k = 1;
    
    int result = sol.minDays(bloomDay, m, k);
    cout << result << endl;
    
    return 0;
}
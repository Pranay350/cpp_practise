#include <bits/stdc++.h>
using namespace std;

int totalHours(int a, vector<int> &piles){
    int n = piles.size();
    int sum = 0;
    for(int i  = 0; i<n; i++){
        float time = (float)piles[i]/a;
       sum += ceil(time);
    }

    return sum;

}
int findSpeed(int hours, vector<int> &piles){
  int low = 1;
   int high = *max_element(piles.begin(),piles.end());
  int mid =0;
    int ans = 0;

 while(low<=high){
       mid = (low + (high - low))/2 ;


    if(totalHours(mid, piles) <= hours){
        ans = mid;
        high = mid - 1;

    }
    else{
        low = mid + 1;
    }
 }








    return ans;
}



int main() {
    vector<int> piles = {3, 6, 7, 11};
    int hours = 8;

    cout << "Min eating speed: " << findSpeed(hours, piles) << endl;

    return 0;
}
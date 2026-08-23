#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int i = 0;
    int maxP = 0;
    int minPrice = INT_MAX;
    for(i = 0; i<prices.size(); i++){
        if(prices[i]<minPrice){
            minPrice = prices[i];
        }
    int profit = prices[i] - minPrice;
    if(profit>maxP) maxP = profit;

    }

return maxP;

}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    
    cout << maxProfit(prices) << endl;
    return 0;
}
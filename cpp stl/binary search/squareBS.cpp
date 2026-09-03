#include <bits/stdc++.h>
using namespace std;






int binarySearchroot( int num) {
    long long low = 0, high = num;
        int ans = 1;

    while (low <= high) {
        long long mid = low + (high - low) / 2; // avoids overflow vs (low+high)/2
        
     if(mid*mid <= num){
            low = mid + 1;
            ans = mid;

        }else{
            high = mid - 1;
        }
           

        }


    

    return (int)ans; // not found
}



int main() {
    vector<int> testCases = {0, 1, 4, 8, 2147395599, 2147483647};

    for (int n : testCases) {
        cout << "sqrt(" << n << ") = " << binarySearchroot(n) << endl;
    }

    return 0;
}
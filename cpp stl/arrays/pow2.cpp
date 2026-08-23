#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
      while(n>1){
        if(n == 1){
            return true;
        }
        if(n%2 != 0){
            return false;
        }
       n = n/2;
    
      }
      return false;
    }
};

int main(){
Solution sol;
    vector<int> tests = {1, 2, 3, 4, 16, 0, -8, 1023, 1024};

    for(int n : tests){
        cout << "isPowerOfTwo(" << n << ") = " 
             << (sol.isPowerOfTwo(n) ? "true" : "false") << endl;
    }

    



    return 0;
}
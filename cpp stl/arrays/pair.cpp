#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"hello we will do pairs today-:"<<endl;

    //define pair using pair<data_type,data_type> name = {1,2}

    pair<int,int> p = {1,2};
    cout<<p.first<<p.second<<endl;

    //we can also creat pair array
    
    pair<int,int> arr[]= {{1,2},{3,4},{5,6}};
    cout<<arr[0].second<<" "<<arr[2].first;

}
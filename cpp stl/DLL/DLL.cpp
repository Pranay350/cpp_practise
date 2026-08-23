#include <bits/stdc++.h>
using namespace std;

struct  node
{
    int data;
    node* next;
    node* back
        node(int val){
            data = val;
            next = nullptr;
            back = nullptr;
        }
};


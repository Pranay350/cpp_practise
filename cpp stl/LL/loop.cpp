#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

bool checkLoop(node* head){

    node* slow = head;
    node* fast = head;
    
    while(fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
return false;   
}
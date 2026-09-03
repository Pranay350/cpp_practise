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

node *ArrtoLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        // create new node from arr[i]
        node *n = new node(arr[i]);
        // attach it to temp->next
        temp->next = n;
        // move temp forward
        temp = n;
    }

    return head;
}

int main()
{

    node *head = new node(1);
    node *second = new node(2);
    node *tail = new node(3);
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *third = new node(arr[0]);
    head->next = second;
    second->next = third;
    third->next = tail;
    //--------------------------------------------------------------

    //---------------------------------------------------------------
    cout << third->data;


    arr = {12, 3, 5, 5, 2};

    node *x = ArrtoLL(arr);
    cout << x << "\n";
    cout << x->data;


    node* temp = x;
   while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
    return 0;
}
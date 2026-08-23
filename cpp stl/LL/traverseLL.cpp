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

node *ArrtoLL(vector<int> &arr){

    node* head = new node(arr[0]);
    node* temp = head;


    for(int i = 1; i<arr.size(); i++){
        node* n = new node(arr[i]);
        temp->next=n;
        temp = n;
    }






    return head;
}


int main()
{


   vector<int> arr = {12, 3, 5, 5, 2};

    node *x = ArrtoLL(arr);
    cout << x << "\n";
    cout << x->data<<"\n";


    node* temp = x;
    int length = 0;
   while(temp!=nullptr){
    //get llength of a linked list;
    
    temp = temp->next;
    length++;
   }
  
    return 0;
}
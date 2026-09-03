#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

node *ArrtoLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* temp = head;

    for(int i = 1; i<arr.size(); i++){
        node* mover = new node(arr[i]);
        temp->next = mover;
        temp = mover;
    }

    return head;
}

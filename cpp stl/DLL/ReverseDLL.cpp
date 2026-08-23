#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node* back;
    node(int val) {
        data = val;
        next = nullptr;
        back = nullptr;
    }
};

node* reverseDLL(node* head) {
    node* temp = head;
    while(temp->next!=nullptr){

     node* plus = temp->next;
        temp->next = temp->back;
        temp->back = plus;
        temp = plus;
    }

}

int main() {
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);

    head->next = second;   second->back = head;
    second->next = third;  third->back = second;
    third->next = fourth;  fourth->back = third;

    // print before
    node* temp = head;
    while (temp) { cout << temp->data << " "; temp = temp->next; }
    cout << endl;

    head = reverseDLL(head);

    // print after
    temp = head;
    while (temp) { cout << temp->data << " "; temp = temp->next; }
    cout << endl;

    return 0;
}
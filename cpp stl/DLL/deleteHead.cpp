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

node* deleteHead(node* head){
    node* oldHead = head;
    head = head->next;
    head->back = nullptr;
    delete oldHead;

    if (head->next == nullptr) {
    delete head;
    return nullptr;
}

    return head;
}


node* deleteTail(node* head){

    node* oldtail = head;

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }


    while(oldtail->next!=nullptr){
        oldtail = oldtail->next;
    }

    node* tail = oldtail->back;
    tail->next = nullptr;
    delete oldtail;

   return head;

}






int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // print before deletion
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // call your delete head function here
    head = deleteHead(head);

    // print after deletion
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
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

node* deletePos(node* head, int pos) {

    // case 1: delete head
    if (pos == 1) {
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }
        node* oldHead = head;
        head = head->next;
        head->back = nullptr;
        delete oldHead;
        return head;
    }

    // traverse to node at pos
    node* temp = head;
    int i = 1;
    while (i < pos) {
        temp = temp->next;
        i++;
    }

    // case 2: delete tail
    if (temp->next == nullptr) {
        node* tail = temp->back;
        tail->next = nullptr;
        delete temp;
        return head;
    }

    // case 3: delete middle
    node* prevnode = temp->back;
    node* nextnode = temp->next;
    temp->back = nullptr;
    temp->next = nullptr;
    prevnode->next = nextnode;
    nextnode->back = prevnode;
    delete temp;

    return head;
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

    head = deletePos(head, 2); // try different positions

    // print after
    temp = head;
    while (temp) { cout << temp->data << " "; temp = temp->next; }
    cout << endl;

    return 0;
}
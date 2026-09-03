#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

node* detectCycleStart(node* head) {
    node *slow = head;
    node *fast = head;

    while(fast!=nullptr && fast->next!=nullptr ){
        slow = slow->next;
        fast = fast->next->next;

        if( fast == slow ){
            node *h = head;
            while(h != slow){
                h = h->next;
                slow = slow->next;
            }
            return slow;
        }

    }
            return NULL;


}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = head->next; // cycle starts at node with data 2

    node* result = detectCycleStart(head);
    if (result != NULL)
        cout << "Cycle starts at node with data: " << result->data << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}
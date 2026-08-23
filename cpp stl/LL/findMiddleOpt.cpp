#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}
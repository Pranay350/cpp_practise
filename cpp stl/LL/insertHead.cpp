#include <iostream>
#include <vector>
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

node *ArrToLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *mover = new node(arr[i]);
        temp->next = mover;
        temp = mover;
    }
    return head;
}

void printLL(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *deleteHead(node *head)
{
    node *newhead = head->next;
    delete head;

    return newhead;
}

node *insertAtHead(node *head, int val)
{
    node *x = new node(9);
    x->next = head;
    return x;
}

node *insertAtTail(node *head, int val)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *tail = new node(val);
    temp->next = tail;
    return head;
}

node *insertAtPos(node *head, int val, int pos)
{
    node *temp = head;
    node *insert = new node(val);
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    insert->next =
        return head;
}

node *deleteTail(node *head)
{
    node *temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;    // free the tail
    temp->next = nullptr; // detach it
    return head;
}

node *deletePos(node *head, int pos)
{
    node *temp = head;
    int i = 0;
    if (pos == 1)
    {
        return deleteHead(head);
    }
    while (i != pos)
    {
        temp = temp->next;
        i++;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

int length(node *head)
{
    node *temp = head;
    int l = 0;
    while (temp != nullptr)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

node *findmiddle(node *head)
{
    int len = length(head);
    node *temp = head;

    if (len % 2 == 0)
    {
        for (int i = 0; i < (len / 2); i++)
        {
            temp = temp->next;
        }
        return temp;
    }
    else
    {
        for (int i = 0; i < (len / 2)+1; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = ArrToLL(arr);
    printLL(head);

    head = insertAtHead(head, 0);
    printLL(head);

    return 0;
}
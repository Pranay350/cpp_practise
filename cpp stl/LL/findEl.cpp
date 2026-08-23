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

int main()
{

    vector<int> arr = {2, 4, 5, 6, 1, 9, 7};

    node *head = new node(arr[0]);
    node *temp = head; // tail
    for (int i = 1; i < arr.size(); i++)
    {
        // traversal
        node *x = new node(arr[i]);

        temp->next = x;

        temp = x;
    }

    int k = 7;
    temp = head;
    while (temp != nullptr)
    {

        if (temp->data == k){
            cout<<"found ";
             return temp->data;

        }

        temp = temp->next;
    }
    cout << "Not found\n";

    return -1;
}
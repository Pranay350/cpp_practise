#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
};

void Queue::enqueue(int data)
{
    if (rear == size - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    rear++;
    arr[rear] = data;
}
void Queue::dequeue()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    front++;
}
void Queue::display()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front + 1; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Queue::peek()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << arr[front + 1] << endl;
}

bool Queue::isFull()
{
    if (rear == size - 1)
    {
        cout << "Queue is full" << endl;
        return true;
    }
    cout << "Queue is not full" << endl;
    return false;
}
int Queue::getSize()
{
    return rear - front;
}
bool Queue::isEmpty()
{
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
        return true;
    }
    cout << "Queue is not empty" << endl;
    return false;
}
void Queue::clear()
{
    front = rear = -1;
    cout << "Queue is cleared" << endl;
}


int main()
{
    Queue q;
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    q.peek();
    q.isFull();
    q.getSize();
    q.isEmpty();
    q.clear();
    q.display();

    return 0;
}
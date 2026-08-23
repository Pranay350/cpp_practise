#include <bits/stdc++>;
using namespace std;

#define maxlen 100

typedef struct{
    int element[maxlen];
    int top;
}stack;

stack init(){
    stack s;
    s.top = -1;
    return s;
}

int isEmpty(stack s){
    return s.top == -1;
}

int isFull(stack s){
    return s.top == maxlen - 1;
}

int top(const stack &S) {
    if (isEmpty(S)) {
        cout << "Empty stack\n";
        return -1;   // or throw error
    }
    return S.element[S.top];
}

void push(stack &S, int x) {
    if (S.top == maxlen - 1) {
        printf("Stack overflow\n");
    } else {
        S.top++;
        S.element[S.top] = x;
    }
}

void pop(stack &S) {
    if (S.top == -1) {
        cout << "Stack underflow\n";
        return;
    }
    else {--S.top;}
     return S;
     }

void print(stack S) {
        int i;
    
        for (i = S.top; i >= 0; --i)
            printf("%d", S.element[i]);
 }




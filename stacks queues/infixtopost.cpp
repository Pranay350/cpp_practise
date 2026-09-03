#include <bits/stdc++.h>
using namespace std;
int priority(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

void infixtopostfix(string s){
    stack<char> st;
    string result;
    int i =0;
    while(i<s.length()){
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;  // If the scanned character is an operand, add it to output

        // If the scanned character is an ‘(‘, push it to the stack
        else if (c == '(')
            st.push('(');

        // If the scanned character is a ‘)’, pop from stack until an ‘(‘ is encountered
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();  // Pop the ‘(‘ from the stack
        }

        // If an operator is scanned
        else {
            while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }

  while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << "Postfix expression: " <<  result << endl;  // Output the result
}

int main() {
    string exp = "(p+q)*(m-n)";  // Infix expression
    cout << "Infix expression: " << exp << endl;
    infixtopostfix(exp);  // Convert the infix expression to postfix
    return 0;
}
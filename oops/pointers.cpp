#include <bits/stdc++.h>
using namespace std;

class ptr {
public:
    int *p;
    ptr(int val) {
        p = new int(val);
    }
    ~ptr() {
        delete p;
    }
};

int main() {
    int a = 10;
    int *p = &a; // pointer to an integer
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Value at address p: " << *p << endl;

    *p = 20; // modifying the value of a through pointer
    cout << "New value of a: " << a << endl;

    return 0;
}
#include <Bits/stdc++.h>
using namespace std;

class student{
public:

    int roll_no;
    char* name;
    float marks;
    student(int roll_no, char* n, float m) {
        this->roll_no = roll_no;
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
        this->marks = m;
    }

    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }

};

int main() {
    student s1(101, "John Doe", 85.5);
    s1.display();

    student(const student &s) { // Copy constructor
        this->roll_no = s.roll_no;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
        this->marks = s.marks;
    }

    s1.name = "Jane Smith"; // Modifying s1's name
    s1.display(); // Displaying s1's details after modification
    s2.display(); // Displaying s2's details to show that it remains unchanged

    return 0;
}

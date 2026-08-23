#include <iostream>
using namespace std;

// -------------------- namespaces --------------------
namespace Math {
    int add(int a, int b) { return a + b; }
}

namespace Physics {
    int add(int a, int b) { return a + b + 100; } // intentionally different
}

// -------------------- static (global / class) --------------------
int globalVar = 10;          // global memory section (data segment)
static int staticGlobal = 20; // static storage duration (also data segment-ish)

// -------------------- class for pointer-to-object --------------------
class Student {
public:
    static int count; // shared by all objects

    string name;
    Student(string n) : name(n) { ++count; }

    void greet() const {
        cout << "Hi, I am " << name << "\n";
    }

    static void showCount() {
        cout << "Student count = " << count << "\n";
    }
};

int Student::count = 0;

// -------------------- reference vs pointer --------------------
void incrementByReference(int& x) { // must refer to a valid object
    x++;
}

void incrementByPointer(int* x) {   // can be null, so check
    if (x) (*x)++;
}

// -------------------- static local variable --------------------
void callCounter() {
    static int calls = 0; // initialized once, keeps value across calls
    ++calls;
    cout << "callCounter called " << calls << " times\n";
}

int main() {
    cout << "=== Namespaces ===\n";
    cout << "Math::add(2,3) = " << Math::add(2, 3) << "\n";
    cout << "Physics::add(2,3) = " << Physics::add(2, 3) << "\n\n";

    cout << "=== Reference vs Pointer ===\n";
   int a = 5;
    int b = 5;
    incrementByReference(a);
    incrementByPointer(&b);
    cout << "a (reference) =  " << a << ", b (pointer) = " << b << "\n\n";

    cout << "=== Pointer to Object ===\n";
    Student s1("Alice");
    Student* pObj = &s1;     // pointer to stack object
    pObj->greet();           // access member through pointer

    Student* heapObj = new Student("Bob"); // pointer to heap object
    heapObj->greet();
    Student::showCount();
    delete heapObj; // free heap memory
    cout << "\n";

    cout << "=== Static Keyword ===\n";
    callCounter();
    callCounter();
    callCounter();
    cout << "\n";

    cout << "=== Memory Layout (addresses) ===\n";
    int localVar = 30;             // stack
    int* heapVar = new int(40);    // heap
    static int staticLocal = 50;   // static storage

    cout << "Address of globalVar    : " << &globalVar << "\n";
    cout << "Address of staticGlobal : " << &staticGlobal << "\n";
    cout << "Address of staticLocal  : " << &staticLocal << "\n";
    cout << "Address of localVar     : " << &localVar << " (stack)\n";
    cout << "Address stored in heapVar: " << heapVar << " (heap)\n";

    delete heapVar;
    return 0;
}
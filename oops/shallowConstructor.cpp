#include <iostream>
using namespace std;

class Car {
public:
    string carName;
    int *engineNumber; // heap-allocated resource

    // Constructor
    Car(string name, int engine) {
        carName = name;
        engineNumber = new int(engine);
        cout << "Constructed " << carName << " | engine @ " << engineNumber << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destroying " << carName << " | freeing " << engineNumber << endl;
        delete engineNumber;
    }
};

void brokenVersion() {
    cout << "\n--- BROKEN: no copy constructor written ---\n";
    Car original("Beat", 101);
    Car copy(original);  

    cout << "original.engineNumber = " << original.engineNumber << endl;
    cout << "copy.engineNumber     = " << copy.engineNumber << endl;
    // Same address printed above. When this function ends, both destructors
    // run and both try to `delete` the SAME pointer -> undefined behavior / crash.
}

int main() {
    brokenVersion();
    return 0;
}
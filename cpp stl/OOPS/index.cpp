#include <iostream>
using namespace std;

class Hero {
    //properties
    public:
      int health;
      char level;

    //calling copy constructor
    Hero(Hero& temp){
        cout << "Copy constructor called" << endl;
        this->health  =  temp.health;
    }
    
    //constructor 
    Hero(int health){
        this->health = health; //stores the value of constructor variable
    }

    void print(){
        cout << this->health << endl;
    }


};


int main(){ 

    Hero pranay(60); //created new object  
    Hero sharad(pranay); //copy constructor

    return 0;
}
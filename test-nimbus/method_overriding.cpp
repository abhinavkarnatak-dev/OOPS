#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal;
    Dog dog;
    animal = &dog;
    
    // Method overriding via base class pointer
    animal->sound();
    
    return 0;
}
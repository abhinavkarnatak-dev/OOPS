#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating...\n";
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Breathing air...\n";
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Barking...\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.breathe();
    myDog.bark();
    return 0;
}
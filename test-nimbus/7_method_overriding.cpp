#include <bits/stdc++.h>
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
    Animal *animalPtr;
    Animal a;
    Dog d;

    animalPtr = &a;
    animalPtr->sound();

    animalPtr = &d;
    animalPtr->sound();

    return 0;
}

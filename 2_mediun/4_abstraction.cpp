#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }

    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "The cat meows." << endl;
    }
};

int main()
{
    Animal *myDog = new Dog();
    Animal *myCat = new Cat();

    myDog->eat();
    myDog->sound();

    myCat->eat();
    myCat->sound();

    delete myDog;
    delete myCat;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Passport
{
private:
    string name;

public:
    Passport(string name)
    {
        this->name = name;
    }
};

class Student
{
private:
    string name;
    Passport passport; // Another class inside 'Student' class but 'Student' does not have the ownership of this class.

public:
    Student(string name, Passport passport) : name(name), passport(passport) {}
};

int main()
{
    Passport passport("123456");
    Student stu("Abhinav", passport); // Even if you remove this obj, the passport obj will still exist, no matter if it's valid or not.
}
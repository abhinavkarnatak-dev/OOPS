#include <bits/stdc++.h>
using namespace std;

class Passport
{
private:
    string passportNumber;

public:
    Passport(string passportNumber)
    {
        this->passportNumber = passportNumber;
    }
};

class Student
{
private:
    string name;
    Passport passport;

public:
    Student(string name, string passportNumber) : name(name), passport(passportNumber) {}
};

int main()
{
    Student stu("Abhinav", "123456");
}
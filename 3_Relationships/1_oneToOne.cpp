#include <bits/stdc++.h>
using namespace std;

class Passport {
    private:
        string passportNumber;

    public:
        Passport(string passportNumber) {
            this->passportNumber = passportNumber;
        }

        string getPassportNumber() {
            return passportNumber;
        }
};

class Student {
    private:
        string name;
        Passport passport;

    public:
        Student(string name, Passport passport)
        : name(name), passport(passport) {}

        void displayDetails() {
            cout << "Student name: " << name << endl;
            cout << "Passport number: " << passport.getPassportNumber() << endl;
        }
};

int main() {
    Passport passport = Passport("123456");
    Student stu("Abhinav", passport);
    stu.displayDetails();
}
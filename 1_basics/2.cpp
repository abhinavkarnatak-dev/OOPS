#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
    
    public:
        void setDetails(string name, int rollNumber) {
            this->name = name;
            this->rollNumber = rollNumber;
        }

        void displayDetails() {
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << rollNumber << endl;
        }
};

int main () {
    Student stu1;
    stu1.setDetails("Abhinav", 1);
    stu1.displayDetails();
}
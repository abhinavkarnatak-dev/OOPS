#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int salary;

public:
    string employeeName;

    void setName(string s)
    {
        employeeName = s;
    }

    void setSalary(int val)
    {
        salary = val;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee obj1;
    obj1.setName("Abhinav");
    obj1.setSalary(1000000);

    Employee obj2;
    obj2.setName("ZiKt0R");
    obj2.setSalary(1000000);

    cout << "Salary of " << obj1.employeeName << " is " << obj1.getSalary() << endl;
    cout << "Salary of " << obj2.employeeName << " is " << obj2.getSalary() << endl;

    return 0;
}
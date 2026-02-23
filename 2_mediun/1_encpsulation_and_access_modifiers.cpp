#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    double salary;

protected:
    int employeeId;

public:
    string name;

    Employee(string name, int employeeId, double salary)
    {
        this->name = name;
        this->employeeId = employeeId;

        if (salary < 0)
        {
            cout << "Invalid salary" << endl;
            this->salary = 0;
        }
        else
        {
            this->salary = salary;
        }
    }

    void setSalary(double salary)
    {
        if (salary < 0)
        {
            cout << "Invalid salary" << endl;
            this->salary = 0;
            return;
        }
        this->salary = salary;
    }

    double getSalary()
    {
        return salary;
    }

    void displayEmployeeDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Employee Id : " << employeeId << endl;
        cout << "Salary : " << fixed << setprecision(2) << salary << endl;
    }
};

int main()
{

    string name;
    int employeeId;
    double salary;
    double newSalary;

    cin >> name;
    cin >> employeeId;
    cin >> salary;

    Employee employee(name, employeeId, salary);

    cout << fixed << setprecision(2) << "Salary : " << employee.getSalary() << endl;

    cin >> newSalary;

    employee.setSalary(newSalary);

    employee.displayEmployeeDetails();

    return 0;
}
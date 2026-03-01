#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    string id;

public:
    Student(string name, string id)
    {
        this->name = name;
        this->id = id;
    }

    string getName()
    {
        return name;
    }

    string getId()
    {
        return id;
    }
};

class College
{
private:
    string name;
    vector<Student> students;

public:
    College(string name)
    {
        this->name = name;
    }

    void addStudent(Student student)
    {
        students.push_back(student);
    }

    void printAllStudents()
    {
        for (int i = 0; i < students.size(); i++)
        {
            Student student = students[i];
            cout << "Name : " << student.getName()
                 << " with id : " << student.getId() << endl;
        }
    }
};

int main()
{
    Student stu1("Abhinav", "1");
    Student stu2("ZiKt0R", "2");

    College college("UPES");
    college.addStudent(stu1);
    college.addStudent(stu2);
    college.printAllStudents();
}
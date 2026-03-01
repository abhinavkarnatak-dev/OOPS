#include <bits/stdc++.h>
using namespace std;

class Course;

class Student
{
private:
    string name;
    vector<Course *> courses;

public:
    Student(string name)
    {
        this->name = name;
    }

    void addCourse(Course *course)
    {
        courses.push_back(course);
    }

    string getName()
    {
        return name;
    }

    void printAllCourses();
};

class Course
{
private:
    string name;
    vector<Student *> students;

public:
    Course(string name)
    {
        this->name = name;
    }

    void addStudent(Student *student)
    {
        students.push_back(student);
    }

    string getName()
    {
        return name;
    }

    void printAllStudents()
    {
        for (int i = 0; i < students.size(); i++)
        {
            Student *student = students[i];
            cout << "Student Name : " << student->getName() << endl;
        }
    }
};

void Student::printAllCourses()
{
    for (int i = 0; i < courses.size(); i++)
    {
        Course *course = courses[i];
        cout << "Course Name : " << course->getName() << endl;
    }
}

int main()
{
    Course math("Math");
    Course dsa("DSA");

    Student stu1("Abhinav");
    Student stu2("ZiKt0R");
    Student stu3("Zikky");

    stu1.addCourse(&math);
    stu1.addCourse(&dsa);
    math.addStudent(&stu1);
    dsa.addStudent(&stu1);

    stu2.addCourse(&math);
    math.addStudent(&stu2);

    stu3.addCourse(&dsa);
    dsa.addStudent(&stu3);

    math.printAllStudents();
    cout << endl;
    dsa.printAllStudents();
    cout << endl;

    stu1.printAllCourses();
    cout << endl;
    stu2.printAllCourses();
    cout << endl;
    stu3.printAllCourses();
}
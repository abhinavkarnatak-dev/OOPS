#include <bits/stdc++.h>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Age cannot be negative!";
    }
};

void checkAge(int age)
{
    if (age < 0)
    {
        throw InvalidAgeException();
    }
    cout << "Valid age: " << age << endl;
}

int main()
{
    try
    {
        checkAge(20);
        checkAge(-5);
    }
    catch (InvalidAgeException &e)
    {
        cout << "Caught Exception: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown exception occurred" << endl;
    }

    cout << "Program ended (like finally block)" << endl;

    return 0;
}
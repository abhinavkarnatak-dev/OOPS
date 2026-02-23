#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    double length, width, area;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
        area = 0.0;
    }

    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
        area = 0.0;
    }

    // Copy Constructor
    Rectangle(const Rectangle &rectangle)
    {
        this->length = rectangle.length;
        this->width = rectangle.width;
        this->area = rectangle.area;
    }

    void calculateArea()
    {
        area = length * width;
    }

    void displayDetails()
    {
        cout << fixed << setprecision(2);
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << endl;
        cout << "---------------------" << endl;
    }

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }
};

int main()
{
    double length, width;
    cin >> length >> width;

    Rectangle r1;
    r1.calculateArea();
    r1.displayDetails();

    Rectangle r2(length, width);
    r2.calculateArea();
    r2.displayDetails();

    // Copy constructor
    Rectangle r3(r2);
    r3.displayDetails();

    return 0;
}
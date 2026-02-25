#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    string name, category;
    double price;

public:
    Product(string name, string category, double price)
    {
        this->name = name;
        this->category = category;
        this->price = price;
    }

    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Category : " << category << endl;
    }
};

class Electronics : public Product
{
private:
    int warrantyPeriodInYears;
    string brand;

public:
    Electronics(int warrantyPeriodInYears, string brand, string name, double price) : Product(name, "Electronics", price)
    {
        this->warrantyPeriodInYears = warrantyPeriodInYears;
        this->brand = brand;
    }

    void displayDetails()
    {
        Product ::displayDetails();
        cout << "Warranty period : " << warrantyPeriodInYears << " years." << endl;
        cout << "Brand : " << brand << endl;
    }
};

class Tshirt : public Product
{
private:
    string size, color;

public:
    Tshirt(string size, string color, string name, double price) : Product(name, "Tshirt", price)
    {
        this->size = size;
        this->color = color;
    }

    void displayDetails()
    {
        Product ::displayDetails();
        cout << "Size : " << size << endl;
        cout << "Color : " << color << endl;
    }
};

int main()
{
    Electronics elec(2, "ASUS", "TUF Dash F15", 102000);
    elec.displayDetails();
    Tshirt tshirt("M", "Black", "Knitted Polo", 1800);
    tshirt.displayDetails();
}
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function for abstraction
};

class Circle : public Shape {
public:
    void draw() override {
            cout << "Drawing Circle." << endl;
    }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();
    delete shape;
    return 0;
}
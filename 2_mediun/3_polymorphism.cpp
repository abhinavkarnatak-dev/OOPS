#include <bits/stdc++.h>
using namespace std;

class ShapeCalculator {
    public:
        void area(int radius) {
            cout << "Area of Circle : " << int(3.14*radius*radius) << endl; 
        }

        void area(int length, int width) {
            cout << "Area of Rectangle : " << length*width << endl; 
        }

        void area(int base1, int base2, int height) {
            cout << "Area of Trapezoid : " << ((base1+base2)*height)/2 << endl; 
        }
};

int main() {
    ShapeCalculator shape;
    shape.area(2);
    shape.area(2, 3);
    shape.area(2, 3, 2);

    return 0;
}
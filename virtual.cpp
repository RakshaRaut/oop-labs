#include <iostream>
using namespace std;
class Shape {
public:
    virtual double calculateArea() {
        return 0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() override {
        return width * height;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    cout << "Area of Circle: " << shape1->calculateArea() <<endl;
    cout << "Area of Rectangle: " << shape2->calculateArea() <<endl;

    delete shape1;
    delete shape2;

    return 0;
}
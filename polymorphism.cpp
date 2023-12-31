#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    shapePtr = &circle;
    shapePtr->draw(); 

    Rectangle rectangle;
 shapePtr = &rectangle;
    shapePtr->draw();
    
    return 0;
}
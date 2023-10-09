#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    virtual void display() = 0; // Pure virtual function
};

// Concrete class Circle
class Circle : public Shape {
public:
    void display()  {
        cout << "This is a Circle." << endl;
    }
};

// Concrete class Rectangle
class Rectangle : public Shape {
public:
    void display()  {
        cout << "This is a Rectangle." << endl;
    }
};

int main() {
Circle circle;
Shape* shape1 = &circle;
shape1->display();
Rectangle rectangle;
Shape* shape2 = &rectangle;
 shape2->display();
    

    
   

    return 0;
}
#include <iostream>
using namespace std;

class Vector {
    private:
    int x;
    int y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector operator+(const Vector& other) const {
 
        Vector result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;
    }
    void display() const {
           cout << "(" << x << ", " << y << ")";
    }
};
int main() {
    Vector v1(3, 4);
    Vector v2(1, 2);

    Vector sum = v1 + v2; // Calls the overloaded + operator

         v1.display();
       cout << "v1: "<<endl;
        v2.display();
       cout << "v2: "<<endl;
     sum.display();
       cout << "Sum of v1 and v2: " <<endl;
    

    return 0;
}
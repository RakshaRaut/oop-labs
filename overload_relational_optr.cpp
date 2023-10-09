#include <iostream>
using namespace std;

class Complex {
    
private:
    double real;
    double imaginary;
public:
    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    // Overload the equality operator (==)
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    // Overload the inequality operator (!=)
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // Overload the less than operator (<)
    bool operator<(const Complex& other) const {
        // Compare based on magnitude (absolute value)
        return (real * real + imaginary * imaginary) < (other.real * other.real + other.imaginary * other.imaginary);
    }

    // Overload the less than or equal to operator (<=)
    bool operator<=(const Complex& other) const {
        return (*this == other) || (*this < other);
    }

    // Overload the greater than operator (>)
    bool operator>(const Complex& other) const {
        return !(*this <= other);
    }

    // Overload the greater than or equal to operator (>=)
    bool operator>=(const Complex& other) const {
        return !(*this < other);
    }

};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2(1.5, 4.5);
    Complex c3(3.0, 2.0);

        cout << "c1: " << c1.real << " + " << c1.imaginary << "i" <<     endl;
        cout << "c2: " << c2.real << " + " << c2.imaginary << "i" <<     endl;
        cout << "c3: " << c3.real << " + " << c3.imaginary << "i" <<     endl;

    if (c1 == c2) {
            cout << "c1 is equal to c2." <<     endl;
    } else {
            cout << "c1 is not equal to c2." <<     endl;
    }

    if (c1 == c3) {
            cout << "c1 is equal to c3." <<     endl;
    } else {
            cout << "c1 is not equal to c3." <<     endl;
    }

    if (c1 < c2) {
            cout << "c1 is less than c2." <<     endl;
    } else {
            cout << "c1 is not less than c2." <<     endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

void print(int number) {
    cout << "Printing an integer: " << number <<endl;
}

void print(double number) {
    cout << "Printing a double: " << number <<endl;
}

void print(string text) {
    cout << "Printing a string: " << text <<endl;
}

int main() {
    print(10);
    print(3.14);
    print("Hello, world!");

    return 0;
}






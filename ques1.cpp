#include <iostream>
using namespace std;
void printValues(int a, int b = 10) {
    cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    printValues(5);         // Uses default value of 'b'
    printValues(7, 20);     // Overrides default value of 'b'

    return 0;
}

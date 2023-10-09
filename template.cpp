#include <iostream>

// Class template with default template arguments
template <typename T = int, int N = 5>
class MyClass {
public:
    MyClass(T value = T()) : data(value) {}

    void printData() {
        std::cout << "Data: " << data << std::endl;
    }

private:
    T data;
};

int main() {
    // Create objects of MyClass with different types and values
    MyClass<> obj1;  // Uses default types (int) and values (0)
    obj1.printData();

    MyClass<double> obj2(3.14);  // Specifies double as the type
    obj2.printData();

    MyClass<long, 10> obj3(42L);  // Specifies long as the type and 10 as N
    obj3.printData();

    return 0;
}
#include <iostream>
using namespace std;

// Function template: Overload 1
template <typename T>
T add(T a, T b) {
         cout << "Using overload 1" <<      endl;
    return a + b;
}

// Function template: Overload 2
template <typename T1, typename T2>
auto add(T1 a, T2 b) {
         cout << "Using overload 2" <<      endl;
    return a + b;
}

int main() {
    int sum1 = add(5, 3);            // Calls overload 1 with int parameters
    double sum2 = add(3.5, 2.5);    // Calls overload 1 with double parameters
    double sum3 = add(3, 2.5);      // Calls overload 2 with int and double parameters

         cout << "Sum 1: " << sum1 <<      endl;
         cout << "Sum 2: " << sum2 <<      endl;
         cout << "Sum 3: " << sum3 <<      endl;

    return 0;
}




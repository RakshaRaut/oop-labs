#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int x = 10;
        int y = 0.10;
        if (y == 0) {
            throw   runtime_error("Division by zero is not allowed.");
        }
        int result = x / y;
          cout << "Result: " << result <<   endl;
    } catch (const   runtime_error& e) {
        cout << "Runtime Error: " << e.what() <<   endl;
    } catch (const   exception& e) {
        cout << "Exception: " << e.what() <<   endl;
    } catch (...) {
        cout << "An unknown error occurred." <<   endl;
    }

    return 0;
}
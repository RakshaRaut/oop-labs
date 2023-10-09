#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
string value;

public:
    MyString(const string& str) : value(str) {}

    MyString operator+(const MyString& other) {
        return MyString(value + other.value);
    }

    void display() {
        cout << value <<endl;
    }
};

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    MyString myStr1(str1);
    MyString myStr2(str2);

    MyString result = myStr1 + myStr2;

    cout << "Concatenated string: ";
    result.display();

    return 0;
}








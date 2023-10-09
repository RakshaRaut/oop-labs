#include <iostream>
using namespace std;
int add(int a,int b){
    return(a+b);
}
int add(int a,int b,int c){
    return(a+b+c);
}
int main() {
    int x = 5, y = 10, z = 15;

    int result1 = add(x, y);
    int result2 = add(x, y, z);
    cout << "Sum of " << x << " and " << y << " is: " << result1 << endl;
    cout << "Sum of " << x << ", " << y << ", and " << z << " is: " << result2 <<endl;

    return 0;
}





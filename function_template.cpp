#include <iostream>
using namespace std;
template<class T>
T add(T a,T b){
    return(a+b);
}
int main(){
    int num1,num2;
    num1=2;num2=3;
    cout<<"The sum of integers is:"<<add(num1,num2)<<endl;
   
    float num3,num4;
    num3=725.5;num4=735.5;
    cout<<"The sum of floats is:"<<add(num3,num4)<<endl;

    double num5,num6;
    num5=2555.5;num6=3555.5;
    cout<<"The sum of double is:"<<add(num5,num6);
}
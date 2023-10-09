#include <iostream>
using namespace std;

class ClassB;
class ClassA;{
   
public:
class ClassA(int n){
    numA=n;
    }
    private:
    int numA;
    friend int add(ClassA,ClassB);
};
class ClassB{
    public:
    ClassB(int n){
        numB=n;
}
private:
int numB;
friend int add(ClassA,ClassB);
};
int add(ClassA objectA, ClassB objectB){
    return(objectA.numA + objectB.numB);
    }
    main(){
        ClassA objectA(11);
        ClassB objectB(5);
        cout<<"sum:"<<add(objectA,objectB);
        // return0;
    }

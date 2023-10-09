#include <iostream>
using namespace std;

class Student{
    private:
    string name,rollNo,gender;
      public:
     Student(string n,string r,string g)
     {
        name=n;
        rollNo=r;
        gender=g;
        
     }
     void display(){
        cout<<name<<rollNo<<gender;
     }
};

class Rakshak:public Student{
    private:
    string address,clz;
    public:
    Rakshak(string n,string r,string g,string a,string c):Student(n,r,g){
        address=a;
        clz=c;
    }
    void display(){
        Student::display();
        cout<<address<<clz;

    }
};


int main(){
    Rakshak test("raksha","5","female","dolpa","wrc");
    test.display();  
}
  
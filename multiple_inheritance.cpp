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
        cout<<endl<<name<<endl<<rollNo<<endl<<gender;
     }
};
class Rakxas{
    private:
    bool isHandsome;
    public:
    Rakxas(bool h){
        isHandsome=h;
    }
    void display(){
        string boolean = isHandsome?"handsome":"beautiful";
        cout <<endl<<boolean;
    }
};
class Rakshak:public Student,public Rakxas{
    private:
    string address,clz;
    public:
    Rakshak(string n,string r,string g,string a,string c,bool h):Student(n,r,g),Rakxas(h){
        address=a;
        clz=c;
    };
    
    void display(){
        Student::display();

        cout<<endl<<address<<endl<<clz;
        Rakxas::display();

    }
};



int main(){
    Rakshak test("raksha","500","female","swarga","jannat",false);
    test.display();  
}
  
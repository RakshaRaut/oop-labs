#include <iostream>
using namespace std;

class Parent {
protected:
 char name[20];
    char address[15];
    public:
    void getdata(){
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter address:"<<endl;
        cin>>address;
    }
    void putdata(){
        cout<<"name is"<<name<<endl;
        cout<<"address is"<<address<<endl;
         }
};
  
// Sub class inheriting from Base Class(Parent)
class Child1 : public Parent {
    protected:
    int rollNo;
    string phoneNo;

public:
    void get(){
        getdata();
        cout<<"enter ur rollNo"<<endl;
        cin>>rollNo;
        cout<<"enter ur phoneNO"<<endl;
        cin>>phoneNo;
        }
        void put(){
            putdata();
           cout<<"rollNo is"<<rollNo<<endl;
            cout<<"phoneNO"<<phoneNo<<endl;
            }
};
  // Sub class inheriting from Base Class(Parent)
class Child2 : public Child1 {
    protected:
    int age;

public:
    void takedata(){
        get();
        cout<<"enter ur age"<<endl;
        cin>>age;
       
        }
        void display(){
            put();
            cout<<"age is"<<age<<endl;
            
            }
};
  
// main function
int main()
{
   Child2 c2;
   c2.takedata();
   c2.display();
   return 0;
}

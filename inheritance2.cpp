#include <iostream>
using namespace std;
class parent {
protected:
 char name[20];
    char address[15];
    public:
    virtual void getdata(){
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
class child_1 : public parent {
    protected:
    int rollNo;
    double phoneNo;

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
class child_2 : public parent {
    protected:
    int age;

public:
    void read(){
         getdata();
        cout<<"enter ur age"<<endl;
        cin>>age;
       
        }
        void display(){
             putdata();
            cout<<"age is"<<age<<endl;
            
            }
};
// main function
int main()
{
    // parent p;
    // p.getdata();
    // p.putdata();
   child_1 c;
   c.get();
   c.put();
   child_2 c2;
   c2.read();
   c2.display();
   return 0;
}
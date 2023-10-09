#include <iostream>
using namespace std;
class parent {
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
class child_1 : public parent {
    protected:
    int rollNo;
    double phoneNo;

public:
    void getdata(){
        getdata();
        cout<<"enter ur rollNo"<<endl;
        cin>>rollNo;
        cout<<"enter ur phoneNO"<<endl;
        cin>>phoneNo;
        }
        void putdata(){
            putdata();
           cout<<"rollNo is"<<rollNo<<endl;
            cout<<"phoneNO"<<phoneNo<<endl;
            }
};

    protected:
    int age;

public:
    void getdata(){
        getdata();
        cout<<"enter ur age"<<endl;
        cin>>age;
       
        }
        void putdata(){
            putdata();
            cout<<"age is"<<age<<endl;
            
            }
};
int main(){
// class class_1 : public parent {
//    public:
//     void getdata() {
//         cout << " Function" << endl;
class_1 c;
        c::getdata();
    

 
  return 0;
}
 

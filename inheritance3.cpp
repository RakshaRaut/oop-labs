#include <iostream>
using namespace std;

class student
{
    protected:
        int roll;
    public:
        void getdata()
        {
            cout<<"enter ur roll"<<endl;
        cin>>roll;
        }
        void putdata(){
        cout<<"roll is"<<roll<<endl;
       
         }
};
class test : public student
{
protected:
 char name[20];
 public:
 void get(){
    getdata();
    cout<<"enter ur name"<<endl;
    cin>>name;
}
void put(){
    putdata();

    cout<<"name"<<name<<endl;
    }
};
class sport :public student
{
    protected:
    int age;
    public:
    void takedata(){
        cout<<"enter ur age"<<endl;
        cin>>age;
            }
            void display(){
                cout<<"age"<<age<<endl;
            }
};
class result : public test,public sport {
    protected:
    int fee;
    public:
    void gets(){
        
        get();
        takedata();
        cout<<"enter ur fee"<<endl;
        cin>>fee;
    }
    void puts(){
        put();
        display();
        cout<<"fee"<<fee<<endl;
        
    }


};
int main(){
    result r;
    r.gets();
    r.puts();
    return 0;
}
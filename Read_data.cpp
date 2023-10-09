#include <iostream>
using namespace std;
 class Student{
    private:
    string name,rollNo,grade;
    public:
    void readData(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter rollNo:";
        cin>>rollNo;
        getchar();
        cout<<"enter grade:";
        cin>>grade;
        
        getchar();
  }
  void displayData(){
    cout<<name<<"\t"<<rollNo<<"\t"<<grade<<"\t"<<endl;
  }
 };
int main(){
    Student array[5];
    for(int i=0;i<5;i++){
        array[i].readData();
        }
        for(int i=0;i<5;i++){
            array[i].displayData();
        }
}
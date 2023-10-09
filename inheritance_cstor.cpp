#include <iostream>
using namespace std;

class Base{
public:
Base(){
cout<<"this is base rak"<<endl;
}
Base(int a){
  cout<<"this is base raut"<<endl;
}
};
class Derived:public Base
{
public:
  Derived(){
cout<<"this is derived rak"<<endl;
  }
Derived( int a):Base(a)
{
  cout<<"this is derived raut"<<endl;
}
};
int main(){
 Derived d(1);
  return 0;
}


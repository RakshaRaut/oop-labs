#include <iostream>
using namespace std;
void RethrowDemo{

    try{
        throw "hello";
    }
    catch(const char*)
    {
        cout<<"caught exception";
        throw;

    }

};
int main(){

    cout<<"main start\n";
    try
    {
      RethrowDemo();
    }
     catch(const char*)
     {
        cout<<"\nCaught exception inside main\n";

     }
     cout<<"main end";
     return 0;
    
    
}

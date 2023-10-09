#include <iostream>
using namespace std;
namespace pool{
char name[20];
int street_no;
}
using namespace pool;
int main()
{
    cout<<"enter pool name and street_no"<<endl;
    cin>>name>>street_no;
    cout<<"pool name and street_no is given"<<endl;
    cout<<name<<endl<<street_no;
    return 0;

}
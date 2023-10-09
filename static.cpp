// WAP to illustrate use of static data member in c++.
#include <iostream>
using namespace std;
class Counter{
    static int count;
    public:
    void addCount(){
        count++;
    }
    void reduceCount(){
        count--;
    }
    void displayCounter(){
        cout<<count<<endl;
        cout<<&count<<endl;

    }    };
int Counter::count
     
     int main(){
        Counter counter;
        counter.displayCounter();
        counter.addCount();
        counter.displayCounter();
        counter.reduceCount();
        counter.displayCounter();

     }


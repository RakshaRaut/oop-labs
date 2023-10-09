#include <iostream>
using namespace std;

class Animal {
public:
   virtual void makeSound() {
             cout << "The animal makes a sound." <<  endl;
    }
};

class Cat : public Animal {
public:
     void makeSound() override {
             cout << "The cat says Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
             cout << "The dog says Woof!" <<      endl;
    }
};

int main() {
    Animal a;
      a.makeSound();
     Dog d;
  d.makeSound();
    Cat c;
    c.makeSound();
   return 0;
}
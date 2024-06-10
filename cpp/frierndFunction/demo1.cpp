#include<iostream>
using namespace std;
class Test{
 private :
 int a;
 protected:
 int b;
 public:
 int c;

friend void func1();

};

void func1(){
    Test t;
    t.a =10; // this is private , run because having the friend function

    t. b=23;// this is protected , run because having the friend function
    t.c =89; // this is public 
}
int main()
{


  return 0;
}
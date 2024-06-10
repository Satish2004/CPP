#include<iostream>
using namespace std;
class Base{

    public:
    void fun1(){
        cout<<"this is the func1"< <endl;
    }
};

class Derived: public Base{

    public:
    void fun2(){
        cout<<"this is the func2"<<endl;
    }
};
int main()
{
    Derived d;

    Base *p = &d;
 ;
    p->fun1();
    // p-> fun2(); this is not call 
  

  return 0;
}
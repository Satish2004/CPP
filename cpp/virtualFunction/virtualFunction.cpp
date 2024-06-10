#include<iostream>
using namespace std;
class Base{

    public:
    // if i write virual keyword in front function of of base class

    // then it will be skip
          /*virtual */ virtual void func(){
         cout<<"func of base"<<endl;

    }


};

class Derived : public Base{\
public:
void func(){
    cout<<" func of derived "<<endl;

}
};

int main()
{
Derived d;
Base *p= &d;
// p-> func(); =--> this is simply calling a base class because it has pointer;
//  when we not call the base call(skip) so you can add "virtual" keyword in front of base

p-> func();
  return 0;
}
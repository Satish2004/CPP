/*
ANSTARCT CLASS ->
________________   if a class having a pure virtual function thet that class called Abstarct class


1)-> we can't create object of the base  class
2)-> we can create object of the derived class
3)-> we cant create pointer of the derived class
4)-> we can create pointer only one base class


*/

#include <iostream>
using namespace std;
class Base
{
 // this class is called Abstarct class becoz func2 is done pure virtual function 
public:
     void func1()
    {
        cout << "func1 of base class" << endl;
    }
    virtual void func2() = 0;

    //{
    //     cout<<'func2 of base class '<<endl;
    // }
};

class Derived : public Base
{
public:
    void func2()
    {
        cout << "drived func2" << endl;
    }
};
int main()
{
    Derived d;
    Base *p = &d;
    // we can write like this
    // Base *p = new Derived();

    p->func1();
    p->func2();

    return 0;
}
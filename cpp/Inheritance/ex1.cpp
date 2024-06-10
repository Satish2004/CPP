//   there is t wo class is available base class and derived class  whos derived class is extend to the base class


#include<iostream>
using namespace std;
class Base {
    public:
    
    int a;
 void show(){

    cout<< "the base class of a is"<<a<<endl;

 }
};

class Derived : public Base{
    public:
    void display(){
        cout<<"this section is derived class"<<endl;

    }

};

int main()
{
 Base b;
 b.a=10;
 b.show();  // 10
 Derived d;
 d.a =17; // 17 but its inherit from base class
 d.show(); // showing valuer of x;
 d.display(); // show cout only of derived display() ;
 

  return 0;
}
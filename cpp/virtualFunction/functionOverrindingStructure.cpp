#include<iostream>
using namespace std;
class parent{

    public:
    void display(){
        cout<<"parent class function is here"<<endl;

    }
};

class child: public parent{
    public:

// if i make display function its override the function 
void display(){
    cout<<"now its a child class function"<<endl;

}
};
int main()
{
 child c;
// c.display(); // here child class is inherit the parent class therefore its display same as a parent class;
// parent p;
// p.display();
// // here is a parent class and it having own display function that can be show directly;
c.display(); // now its a child class function<---



  return 0;
}
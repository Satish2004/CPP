#include<iostream>
using namespace std;
class complex{
    private:
    int real ;
    int img;

    public:
    complex(int r= 0, int i=0){
        real = r;
        img = i;

    };
    void display() {
        cout<<real<<"+i"<<img;

    }

    friend complex operator+(complex c1, complex c2); 
    //  friend function works from the outside the class with out scope resolution
    //  they say just like a this is my friend and pls access it so we define using "friend " keyword
};

complex operator+(complex c1, complex c2){
    complex temp;
    temp.real = c1.real+ c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
complex c1(3, 4), c2(3, 7), c3;
c3 = c1+c2;
c3.display();
  return 0;
}
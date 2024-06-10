#include<iostream>
using namespace std;
class rectangle{

    public:
    void area(){
        cout<<"the area of rectangle is length * breadth"<<endl;

    }
};

class cuboid:public rectangle{

    public:
    void perimeter(){
        cout<<"the perimeter of cuboid is 2*(length+ breadth)"<<endl;

    }
};
int main()
{
//  Base is pointer and drived object 
//  base class point to adderss of derived class
 cuboid c;// its your derived class
// c.area();
// c.perimeter();

//  this is inherit the rectangle so therefore print both the value

rectangle *ptr;
//  we can write like this \
//  rectangle *ptr = &c;

ptr = &c;
ptr-> area();
// ptr->perimeter();
//  its not inherited by the derived class



  return 0;
}
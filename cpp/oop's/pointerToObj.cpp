#include<iostream>
using namespace std;
class reactangle{
    public:
    int length; // data
    int breadth; // data
    int area(){ // function
        return length* breadth;

    }
    int peremeter(){ // function

        return 2*(length+ breadth);

    }
};



int main()
{
// object

reactangle r;
reactangle *p; // declare
p =&r;  // initialise
p -> length =20;  // in r.length conatain 10 but p also point to r through their address 
r.length = 10;
//  when we are change into r so p also be change
//    firstly = r =10;
//   then p point address of x and overwrite this value and change the value of r 10 to 20;



p ->breadth =22;
 cout<< "the area of rect " <<p->area()<<endl;

  return 0;
}
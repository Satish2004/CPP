//  this program is basically creating object in heap using pointer;

#include <iostream>
using namespace std;
class rectangle
{

public:
    int length;
    int breadth;
 


    int area()
    {
        return length * breadth;
    }

    int peremeter()
    {

        return 2 * (length * breadth);
    }

};

int
main()
{
    // object

    // rectangle r ; this is normally for satck

rectangle *p = new rectangle;

    
    
    // we can write like that 
    // rectangle *p ;
    // p = new rectangle;

 p-> length =12;
 p ->breadth = 2;
 
 cout<<p->area();


    return 0;
}
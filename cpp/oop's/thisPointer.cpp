//  like you are sitting  in inova car and indicate the other car but like you are sitting in own car and say this car i.e you indicate own class --->

#include <iostream>
using namespace std;
int rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth)
    {
        // length = length ; its is getting confused becoz who are the main variable and who is the parameter

        // breadth = breadth;
        //  so for prevent we can use "this->"
        this->length = length;
        this->breadth = breadth;
    }

    int area()
    {

        return length * breadth;
    }

    int peremeter()
    {
        return 2*(length + breadth);

    }
};
int main()
{
 reactangle r1(10,20);
 cout<<"the are is "<<r1.area()<<endl;
 
    return 0;
}
#include <iostream>
using namespace std;
class rectangle
{

private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {

        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    //  geting the input
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r1.
        // r1.length =10;
        // r1.breadth =14;
        // r1.area();
        //  this is directly throw error so we can use accesser and mutator
  r1.setLength(10);
  r1.setBreadth(12);
  cout<<r1.area()<<endl;
  cout<<"the length is"<<r1.getLength<<endl;
  cout<<"the breadth is"<<r1.getBreadth<<endl;

        return 0;
}
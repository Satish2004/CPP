#include <iostream>
using namespace std;

//  previously i was doing all the data and function under the public so any one change the value like we are not want to negative number so this restriction is avail in data handling
//  solution -> make the data private and function wil be public;
// in main function under the object we can not directly access like rectangle r
// r.length (x);
//  so therefore we can make another object with parameter with few condition and also make return function like a show the data

class rectangle
{
    // if i dont  want to private this place so by default take private
private:
    int length;
    int breadth;

public:

  int area()
    {
        return length * breadth;
    }

    void setlenth(int l) // in case we are consider int in place of void then code will be stuck because in the void we can pass argument
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            cout << "ohh ho l ==this is not valid number please type positive number" << endl;
        }
    }

void setBreadth(int b)  //in case we are consider int in place of void then code will be stuck because in the void we can pass argument
    {
        if (b >= 0)
        {
            breadth = b;
        }

        else
        {

            cout << " b== this is not valid number please type positive number" << endl;
        }
    }

 int getLength() // in case i will take void in place of int then code will be stuck because int the void return will not work
    {
        return length;
    }

int getBreadth() // in case i will take void in place of int then code will be stuck because int the void return will not work
    {
        return breadth;
    }
};

int main()
{
    rectangle r;
    r.setlenth(10);
    r.setBreadth(10);
   
  cout<<"the length is ="<<r.getLength()<<endl;
  cout<<"the breadth is ="<<r.getBreadth()<<endl;
   cout<<"the area of rectangle is "<<r.area()<<endl;

    return 0;
}

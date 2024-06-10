//  we can crteate 4 typed of constructor
/*
1) default constructor -> which is already exist in the every class when we not create any constructor then default construct is called

2) non - parametrized -> the non perma,. constructor is does not takes any type ofd parameter
eg-> when  i goes to shop and say i want to pen there is no any specific word that is called non param . cons.

3) parameterized - > the parametrized constructor avail parameter
eg -> goes to buy pen specific is red the red a like a parameter

4) copy constructor -> that means its totally copy other constructor
eg -> i want to buy THIS type of pen ;




*/

#include <iostream>
using namespace std;
class rectangle
{
private:
  int length;
  int breadth;

public:
  rectangle()
  { // non parametrized construtor
    length = 1;
    breadth = 1;
  }

  //   parametrized constructor
  rectangle(int l, int b)
  {
    setLength(l);
    setBreadth(b);
  }

  rectangle(rectangle &r)
  {
    length = r.length;
    breadth = r.breadth;
  }

  int area()
  {
    return length*breadth;
  }

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

  int getLength()
  {
    return length;
  }

  int getBreadth()
  {
    return breadth;
  }
};
int main()
{
  rectangle r(10, 2);
  cout << r.area << endl;

  return 0;
}
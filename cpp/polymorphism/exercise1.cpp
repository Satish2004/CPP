// // write classes to demonstrate polymorphism
// base class shape
// derived classes
// 1 rectangle
// 2 circle

#include <iostream>
using namespace std;
class shape
{
public:
    // pure virtual functons are  here
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle(int l, int b )
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

class circle : public shape
{
private:
    float radius;

public:
    circle(int r)
    {
        radius = r;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
    float perimeter()
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    shape s *new rectangle(10, 5);
    cout << "area of rectangle " << s->area() <endl;
    cout << "perimeter of rectangle" << s->periumeter() << endl;
    s = new circle(10);
    cout << "area of circle " << s->area() << endl;
    cout << "perimeter of circle" << s->perimeter() << endl;

    return 0;
}
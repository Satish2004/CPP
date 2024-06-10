#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "non-param base constructor" << endl;
    }

    Base(int x) { cout << "param base constructor" << x << endl; }
};

class Derived
{

public:
    Derived()
    {
        cout << "non- param derived constructor" << endl;
    }
    Derived(int y)
    {
        cout << "param derived constructor" << endl;
    }
    Derived(int x, int y) : Base(x)
    {
        cout << "second param derived constructor" << endl;
    }
};
int main()
{
    Derived d(10, 15);

    return 0;
}
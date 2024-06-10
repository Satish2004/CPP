#include<iostream>
using namespace std;
class parent{
    private: int a;
    protected: int b;
    public: int c;

    void funcparent(){
        a =10; // private
        b=15; // protected
        
        c=5; // public

    }

};

class child : public parent{
    public:
    void funcChild(){
        // a =10; this is  inherit the parent class so we know that private member is under the braces and does not work with out constructor with oit accessing its is niot work

        b=15;
        c=5;
    }
};
class grandChild: public child{

    public:
    void funcGrandChild(){
        // a =10; same as private membe5r therefore its will not define 
        b=15;
        c=5;
    }
};
int main()
{
child c;
// c.a =10; private member therefore its not define 
// c.b =15  also protected is not define in object
c.c=5;

  return 0;
}



/*

private->
--------
work under the barces not in drived class (other class) and object

Protected->
---------
work only derived class and obj.

public->
-------
work inside the derived object and declaration class

/
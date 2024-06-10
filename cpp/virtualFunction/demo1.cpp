#include<iostream>
using namespace std;
class baseCar{

    public:
    void start(){
        cout<<"baseCar funcion is here"<<endl;
    }
};

class advanceCar : public baseCar{

    public:
 void start(){
        cout<<"advanceCar is here"<<endl;
    }
};
int main()
{
baseCar *p = new advanceCar();
p->start(); // base car is start function is print but we want to print advanceCar function so simply we will make virtrual of base class



  return 0;
}


/*

NOTE
pointer always call default base class 
but we want to print derived ( child)
class so we can skip base class using virtual key word
jis function ko nhi chaiye uske  aage tum virtual laga do

*/
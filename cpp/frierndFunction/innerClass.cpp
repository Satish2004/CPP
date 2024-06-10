#include<iostream>
using namespace std;
class outer{
public:


func(){
    i.display;  // use obj.

}
class inner{


    public:
    void display(){
        cout<<"display of inner class"<<endl;

    }
};
inner i; // its is my definition of obj.
};
int main()
{
    outer:: inner i; // its is not acccesable because outer  class is private 


  return 0;
}
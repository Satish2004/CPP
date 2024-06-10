//  write a program to basic pointer and derived should be obj;


#include<iostream>
using namespace std;
class BasicCar(){

    public:
    void start(){
        cout<<"basic car is started"<,endl;

    }
    void puncherWheels(){
        cout<<"basicCar is punchur";
    }
};

class AdvanceCar : BasicCar{
  void end(){

  } 
  void music(){
    cout<<"advance car gaves us musix systen"<<endl;
  } 
};
int main()
{
AdvanceCar ac;
BasicCar *ptr = &AdvanceCar;
ptr->start();
ptr-> puncherWheels();



  return 0;
}
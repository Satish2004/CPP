#include<iostream>
using namespace std;
class car{

    public:
void start(){
        cout<<"car is started"<<endl;

    }

  void end(){
        cout<<"car is ended"<<endl;
    }
};

class Innova : public car{
    // when we define virtual keyword in car  section so should be print thar section because innova is inherited by car not by thar ok


    public:
   void start(){
        cout<<"innova is started"<<endl;

    }
      void end(){
        cout<<"innova is endded"<<endl;

    }


};


class thar : public car{

public:
void start(){
    cout<<"thar is started"<<endl;

}

void end (){
    cout<<"thar is endded"<<endl;

}
};
int main()
{
// when i call the car as pointer so call only car class
car *c = new Innova () ; // heap;
c->start();
c->end();
c = new thar(); // depends on heap who wil be the calling 
c->start();
c->end();


  return 0;
}
/*

NOTE
      here virtual void start()= 0;
      here virtual void end()= 0;
      both are called pure vitrtual function
    

    why are we written like that
    because there is not working of card object cout so we can simply remove cout from start() and end() then 
    make like pure virtual function
    

*/
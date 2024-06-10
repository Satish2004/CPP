#include<iostream>
using namespace std;
class your;

class my {
    private: int a;
    protected: int b;
    public: int c;
friend your;

};

class your {
    public:
    my m ;
    void func(){
        m.a =10;
        m.b=10;
        m.c=10;

    }
};
int main()
{

  return 0;
}
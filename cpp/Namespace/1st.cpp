#include<iostream>
using namespace std;
namespace first{
void func(){
    cout<<"first"<<endl;
}
}

namespace second{
void func(){
    cout<<"second"<<endl;
}
}

int main()
{
first::func();

  return 0;
}
#include<iostream>
using namespace std;

void func(){

    staic int  s = 10; // if there is nop static the op willbe only 11, 11
cout<<s;


}
int main()
{
 func();
 func();

  return 0;
}
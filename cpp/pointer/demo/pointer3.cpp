#include<iostream>
using namespace std;
int main()
{
intr *p = new int [5];
p[0]=12;
p[1]=13;
 cout<<p[1]<<endl;

//  if i dont want to this p simply i can p = NULL but in modern cpp we can use nullptr
delete []p;

  p=nullptr;

  return 0;
}
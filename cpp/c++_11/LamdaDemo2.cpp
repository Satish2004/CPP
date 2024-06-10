#include<iostream>
using namespace std;

int main()
{
int a =10;
int b =6;
auto x = [a , b](){cout<<a<<endl<<b;};
x();
  return 0;
}
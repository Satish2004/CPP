#include<iostream>
using namespace std;

int main()
{
int a =10;
auto x= [a](){cout<<a<<endl;};
x();
a++;
x(); // increment by 1 becomes 1 becoz of &a;

  return 0;
}
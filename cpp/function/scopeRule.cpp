#include<iostream>
using namespace std;

int x =10;

int main()
{
 int x =20;
 {

    int x = 40;
    cout<<"x =40 wala "<<x<<endl; // print nearrest x;

 }
 cout<<"x =20 wala"<<x<<endl; // print next nearest value;
// for global using scope resolution " :: " 
 cout<< "global"<<::x<<endl;
 
  return 0;
}
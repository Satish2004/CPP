
// this program, is using default argument z =0;
// where paramater intialising right to left without skiping


#include<iostream>
using namespace std;

int add(int x , int y , int z= 0){

    return x+ y +z;
}
int main()
{

int c = add(10,20,0);
int d = add(10,20);
cout<<"the result of c is"<<c<<endl;
cout<<"the result of d is"<<d;




  return 0;
}
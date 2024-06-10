#include<iostream>
using namespace std;
int main()
{
int A [4] = {1,2,3,4};
int  *p; // declaration 
p = A; // this is initialize 


cout<<*p <<endl;
//  this is default point index 0 which is 1 
 p++;
 cout<<*p<<endl;
//  this is point only 1 index which is 1;

p--;
cout<< p<<endl; // address od the A with written to p

cout<<*p<<"hey"<<endl;
// *p gives actual data;
  return 0;

// jb array ke shuru index me reach kr rhe hai to there will be no more other previous value that conataiin by array and that will be not showing in  output;

// this is not print in output
  p-2;
  cout<<*p<<endl;

}
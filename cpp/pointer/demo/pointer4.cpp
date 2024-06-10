#include<iostream>
using namespace std;
int main()
{
//  TO ASK THE USER HOW MANY SIZE OF THE ARRAY  YOU WANT;

int size;

cout<<"enter the size of the array"<<endl;

cin>>size;
int A[size];


cout<<sizeof A<<endl;

  return 0;
//   when i will enter 10 so o/p will be 40 because of inter value takes 4 byte to represnt in memory 
//  that means 4 * 10 = 40;

// this is create in stack when we want to again modify size of this array so we can do this type of unneccessary codition;




}
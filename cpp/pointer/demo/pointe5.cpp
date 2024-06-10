#include<iostream>
using namespace std;
int main()
{
int *p = new int [5]; 
//    this p is created in heap beacoz the new is symbolically represent this array available in heap rather than stack

//  NOW DELETE
delete []p;


p =  new int[90];
// and this tha new intialization pointer p in heap
//  but int[5] is not in heap becoz that pointer had modified so simply we can delete that p int[5] pointer



  return 0;
}
// call by address

#include<iostream>


using namespace std;
int *func(int size){
     int *p = new  int [ size];
     for(int i =0 ; i< size  ; i++){
        p[i]= i+1;
     }
     return p;
}

int main()
{
    int func(5);

  return 0;
}

//  revise time ---



//  int x =10;

//  int *p;
//   p =&x;
//   p  print krenge to kya hoga that will be print only addres of x;
// but i wll print cout<<*p that inherit the actual data of x i.e 10
// 
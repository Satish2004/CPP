// #include<iostream>
// using namespace std;

// void swap(int a , int b){
// int temp ;
// temp = a;
// a= b;
//  b= temp;
//  cout<<a<<" "<< b<<endl;

// }
// int main()
// {
// int x = 10, y=20; // x and y is actual value so in pass by value doent change that will be copy in formal parameter and then change in it
// swap(x , y);
// cout<<x<<" "<<y<<endl;  // ootput will be x = 10 and y =20 there is not swaping because no return value in swap define ;


//   return 0;
// }

// ------------------------------------------------------>


//  CALL BY VALUe

// #include<iostream>
// using namespace std;

// int swap(int a ,int b){
//     cout<<"prev"<<a<<" "<<b<<endl;

//       int temp = a;
//       a= b;
//       b=temp ;

//       cout<<"now after swaping"<<a<<" "<<b<<endl;


// }
// int main()
// {


// int x,y;
// cout<<"enter the two values for swaping "<<endl;
// cin>>x>>y;
// swap(x, y);
// cout<<"this is a actual parameter whos not change" <<x<<" "<<y<<endl;



//   return 0;
// }


// ------------------------------->

// this is call by address


// #include<iostream>
// using namespace std;
// int swap (int *a , int*b){
//     cout<<"address of a and b is respectively :   "<<a<<" "<<b<<endl;
//     int temp =*a; // data a is going to temp 

//     *a= *b;
//     *b= temp;

//     //  *p =b  to jo p ki value hogi aur b ki value hogi wo eqaul hogi;  initialise ho rhi h


// cout<<"now  swaped value :  "<<*a <<" "<<*b <<endl;


// }

// int main()
// {

//     int x =10 ,y=20;

//     swap( &x , &y);
   


//   return 0;
// }


// ------------------------------------------------------------------->

// this is call by refrence


#include<iostream>
using namespace std;
void swap(  int &a , int &b){
    int temp = a;
    a= b;
    b= temp;
    cout<<a<<" "<<b<<endl;
// here if i write for  loop and cout the i so formal parameter will be changing into call by reference to call by vcalue becoz this reference not take any longer value so it covert into call by value;




}

int main()
{

int x =10 , y=20;
swap(x , y);
cout<<x <<" "<< y;


  return 0;
}
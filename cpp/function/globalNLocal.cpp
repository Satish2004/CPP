 #include<iostream>
 
 
 using namespace std;
 int g =0;
 void func(){
    int a =15;
    g = g+a;
     cout<<g<<endl;

 }
 int main() // main se start hua then g is 15 and overwrite the global g = 0 ; to g=15 

//  func() is call and direct throw in defination of func functiuon
//  a =15
//  g jo hai usme pahle ka g =15 + 15 = 30;
// print kre g ko 
 {
 g =15;
 func();
 g++;  // done with g++ and change i ntop 30 to 31 
//  then i will be simply print the value of g

 cout<<g<<endl;

   return 0;
 }
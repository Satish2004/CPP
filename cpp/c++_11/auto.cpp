// In cpp 11 feature auto means automatically detected according to there type of the existing data type or final o/p data types

#include<iostream>
using namespace std;
float func(){
    return 2.34f;
}
int main()
{ 
auto  x = 2*5.7+ 'a';
cout<<x;
// it becomes a double but simultaneously we dont know about what are comes 
 // but we can write auto they can detect automatically
  return 0;
}
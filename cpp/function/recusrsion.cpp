#include<iostream>
using namespace std;

void recur(int n){
    if(n>0){
        cout<<n<<endl;
        recur(n-1);
    }
}
int main()
{
int n ;
cout<<"enter the num"<endl;
cin>>n;
recur(n);
  return 0;
}
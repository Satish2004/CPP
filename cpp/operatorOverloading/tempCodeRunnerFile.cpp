#include<iostream>
using namespace std;
clas complex{
    private:
    int real;
    int img;

    complex add(complex x){
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;

    }
};
int main()
{
    complex c1 , c2 ,c3;
c1.real =12; c1.img = 1;
c2.real = 1; c2.img= 3;
c3 = c1.add(c2);
cout<<c3.real<<"+i"<<c3.img;


   

  return 0;
}
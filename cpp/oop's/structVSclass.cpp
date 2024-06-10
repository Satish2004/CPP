/*the struct in cpp is also conatain the data member and function(inside the class except c language)
and also same as the class so what are the difference between class and structure 

because structure having no security feature like by default it is public and access the outside the scope
but in the class default is private whos doesnot use outside the scope



 */

#include<iostream>
using namespace std;
struct demo{ // but in the class we can write as public and private as per your choice

    int x;
    int y;



    void display(){
        cout<<x<<" "<<y<<endl;

    }


};
int main()
{
demo d;
d.x =10;
d.y =20;
d.display();

  return 0;
}
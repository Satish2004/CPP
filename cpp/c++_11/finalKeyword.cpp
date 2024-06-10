// // The final keyword in cpp and java is used for restriction and overrides in function]

// #include<iostream>
// using namespace std;
// class Parent {
//  cout<<"this is based class"<<endl;

// };
 
//  class Child: Parent{
// cout<<"this is a derived class which is inherit the Parent class by the Child class"
//  };


// //Above example is normal class

// but final keyword is a restriction on the derived class like dont use parent class
// eg:-


#include<iostream>
using namespace std;
class Parent final{

    cout<<"Base class with final keyword"<<endl;
}

class Child: Parent {
    cout<<"this is a derived class which is does not inherit the BAse class because of final"<<endl;
}; // become error 

int main()
{

  return 0;
}
// int main()
// {

//   return 0;
// }


/*2nd use of final

when we create a function override  in function
*/
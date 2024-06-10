// oops is stands for object oriented programming 

/*
there is 2 parts of programming

1) modular programming
2) object oriented programming


----> note parts of software programming elements 
1) data --> show property and situated in  internally

2) function --> show behavior and output .


---------->
princial of oops
1) abstration -> that is union and structrure of data type like int var and that will be smaller part 
eg -> if any car mainufacturing company is build car then maditory thing that will be part of car like starring , wheels, geartools etc


2) encapsulation-> like a capsule that contain the integrity of the abstraction values
eg-> that car mainufacturing caompany having abstarctyion and that will be integrated in CAR 

3) inheritance -> class to class using extends like parent to child class 

4) polymorphism -> one person but there has different work
 like a same function but they are working more and more and also different work



*/

// WRITING A CLASS AND OBJECT

#include<iostream>


using namespace std;
// class is always define thre outside the m ainn function and object is always define in main()function

class rectangle {
    // that contain data and function
  

//    data that will be by default private ;; for execessing in main function 

// to change into public of class 
    public:
    int length;
      int breadth;

      int area(){
        return length*breadth;
      }
      int perimeter(){
        return 2*(length+breadth);

      }


};

int main()
{
//  its is object

rectangle r1, r2;


//  that will be making r1 and r2 dibbaa and there will be conatining length , breadth , area() , and pere();
// for all r1 and r2
r1.length= 2;
r1.breadth =3;
int Area= r1.area(); // 6
 int pere = r1.perimeter(); //10
cout<<"area of ractangle is "<<Area<<endl;
cout<<"peremeter of ractangle is "<<pere<<endl;



  return 0;
}
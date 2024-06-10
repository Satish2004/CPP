// write a class for student with r
//  1) roll
// 2 ) name
// 3) marks for total marks grade
//  and required methods

#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    int maths;
    int phy;
    int chem;


    //  this is the required function
    public:
    Student(int r, string n , float m , float p , float ch){
        roll = r;
        name = n;
        maths = m;
        phy = p;
        chem = ch;

    }

    int total(){
        return maths+py+chem;
    }
    char avGrade(){
        float average=  total()/3;
    if(average>=60){
        return "A";
    }
    else if(average>=40 && average<60){
        returnn "B"
    }
    else {
        return "C";
    }

    }
};
int main()
{
  int roll;
  string name;
  int m , p ,ch;
  cout<<"enter the  roll number of student"<<endl;
  cin>>roll;
  cout<<"enter the student name"<<endl;
  cin>>name;
  cout<<"enter the three subject"<<endl;
  cin>>m>>p>>ch;
  Student s(r , n, m ,  p ,ch);
  cout<"the total marks is"<<s.total()<<endl;
  cout<<"the average is "<<s.avGrade()<<endl;

  return 0;
}
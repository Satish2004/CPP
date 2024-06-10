#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ifile is used for insert the input in the mentioned my before this step we wil open the file then takling the value from the my.txt
ifstream ifs("my.txt");
string name;
int roll;
string branch;
ifs>>name>>roll>>branch;
ifs.close();
cout<<"Name "<<name<<endl;
cout<<"roll "<<roll<<endl;
cout<<"branch "<<branch<<endl;

  return 0;
}
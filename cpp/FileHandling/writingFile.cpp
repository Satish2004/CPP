

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofile is used for writing a data in mentioned file then after completion simply we will close the file using "VARIABLE_NAME. CLOSE"
    
    ofstream outfile ("my.txt", ios:: trunc);
    outfile<<"satish"<<endl;
    outfile<<"roll "<<44<<endl;
    outfile<<"branch is : cse"<<endl;
    outfile.close();

  return 0;
}
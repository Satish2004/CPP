  #include<iostream>
  using namespace std;
  void SearchLinear(int A[], int n , int key){
    for (int i =0 ; i<n ; i++){
        if(key===A[i])return i;
        return 0;

    }
  }
  
  int main()
  {
  int A[]= {1,2,3,4,5,6,7};
int k ;
cout<<"enter the value to search"<<endl;
cin>>k;
 int index = SearchLinear(A ,7 , k);
 cout<<"value fount at index :"<<index<<endl;
    return 0;
  }
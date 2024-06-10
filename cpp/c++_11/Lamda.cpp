/*

Lamda expression is used to defining the un- named function

SYNTAX of Lamda expression in cpp 11
[capture-list](parameter-list)-> return type{body};
ex->
int x = [](int x , int y){return x+y}(10, 5);


USE ->
1)
if we doesnot declare the a and b
 int x = [](int x , int y){return x+y}(10, 3);
                  or
      int x = [](int x , int y) int{return x+y}(10, 3);
 x();
 we can write also auto 

 2)

 if we declare a and b in outside the expression
 like 
 int a =10;
 int b=5;
 int y = [a,b](){cout<<a<<" "<<b"}();


 3)

 when i modify the value of a and b then pass the reference

 like
 int a =10;
 int b =3;
 int x = [&a , &b](){cout<<++a<<" "<<++b};
           or
 int x = [&](){cout<<++a<<" "<<++b};


*/
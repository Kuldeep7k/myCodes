#include<iostream>
using namespace std;
inline int sqrt(int x)
{
int y;
y=x*x;
return y;
}
main()
{
int a,b;
cout <<"Enter a number \n";
cin>>a;
b=sqrt(a);
cout<<"square"<<b;
}

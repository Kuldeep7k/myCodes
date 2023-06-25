#include<iostream>
using namespace std;
int m=30;
main()
{
int m=70;
cout<<"local m="<<m<<"\n";
cout<<"global m="<<::m<<"\n";
::m=7;
cout<<"local m="<<m<<"\n";
cout<<"global m="<<::m<<"\n";
}

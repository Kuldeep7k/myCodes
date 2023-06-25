#include<iostream>
using namespace std;
void test (int x)
{
try
{
if(x==1)
throw x;
else
if(x==0)
throw 'x';
else
if(x==-1)
throw 1.0;
cout<<"end of try block \n";
}
catch(char c)
{
cout<<"Caught charater \n";
}
catch(int m)
{
cout<<"Caught integer \n";
}
catch(double d)
{
cout<<"Caught double \n";
}
cout<<"end of try-catch \n";
}
int main()
{
cout<<"test \n";
cout<<"x==1";
test(1);
cout<<"x==0";
test(0);
cout<<"x==-1";
test(-1);
cout<<"x==2";
test(2);
return 0;
}

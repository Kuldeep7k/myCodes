#include<iostream>
using namespace std;
class invent2;
class invent1
{
int a,b;
float c;
public:
invent1(int i,int j,float k)
{
a=i;
b=j;
c=k;
}
void putdata()
{
cout<<"a :"<<a<<"\n";
cout<<"b :"<<b<<"\n";
cout<<"c :"<<c<<"\n";
}
int geta()
{
return a;
}
int getb()
{
return b;
}
float getc()
{
return c;
}
operator float()
{
return(b*c);
}
};
class invent2
{
int a;
float value;
public:
invent2()
{
}
invent2(int x,float y)
{
a=x;
value=y;
}
void putdata()
{
cout<<"a :"<<a<<"\n";
cout<<"value :"<<value<<"\n\n";
}
invent2(invent1 p)
{
a=p.geta();
value=p.getb()*p.getc();
}
};
int main()
{
invent1 s1(100,5,120.0);
invent2 d1;
float total;
total=s1;
d1=s1;
cout<<"product details - invent1 type"<<"\n";
s1.putdata();
cout<<"\n stock value"<<"\n";
cout<<"value ="<<total<<"\n\n";
cout<<"product details -  invent2 type"<<"\n";
d1.putdata();
return 0;
}

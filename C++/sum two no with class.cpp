#include<iostream>
using namespace std;
class sample
{
    int a,b,c;
public:
    void getdata(int,int);
    void putans();
    void sum();
};
void sample::getdata(int i,int j)
{
    a=i;
    b=j;
}
void sample::putans()
{
    cout<<"Answer is "<<c;
}
void sample::sum()
{
    c=a+b;
}
main()
{
    sample k;
    k.getdata(2,4);
    k.sum();
    k.putans();
}

#include<iostream>
using namespace std;
class code
{
int id;
public:
code(){}
code(int a)
{
id=a;
}
code(code&k)
{
id=k.id;
}
void display()
{
cout<<id;
}
};
int main()
{
code A(100);
code B(A);
code C=A;
code D;
D=A;
cout<<"\n A : ";
A.display();
cout<<"\n B : ";
B.display();
cout<<"\n C : ";
C.display();
cout<<"\n D : ";
D.display();
return 0;
}

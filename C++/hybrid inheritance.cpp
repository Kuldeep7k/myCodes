 #include<iostream>
using namespace std;
char name[20];
int a,b,total_marks;
class A
{
public:
void getname()
{
    cout<<"\n enter name of student ";
    cin>>name;
}
void disname()
{
    cout<<"\n name of student is "<<name;
}
};
class B:public A
{
public:
void getmarks()
{
    cout<<"\n enter subject1 of student ";
    cin>>a;
}
void dispmarks()
{
    cout<<"\n subject1 marks ";
    cout<<a;
}
};
class C
{
public:
void extmarks()
{
    cout<<"\n Enter subject1 extra marks ";
    cin>>b;
}
void dispextra()
{
    cout<<"\n Extra marks subject1 of student is ";
    cout<<b;

}
};
class D:public B,public C
{
protected:
public:
void total()
{
    total_marks=a+b;
}
void totaldisp()
{
    cout<<"\n total marks of student ";
    cout<<total_marks;
}
};
 int main()
{
	D d1;
	d1.getname();
	d1.disname();
	d1.getmarks();
d1.dispmarks();
d1.extmarks();
d1.dispextra();
d1.total();
d1.totaldisp();
	return 0;
}

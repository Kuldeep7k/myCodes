#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int rollno;
char name[20];
int marks;
ofstream outf("kk.txt");
if(!outf)
{
cout<<"file not opening";

}
cout<<"Enter student details \n";
cout<<"Enter student name";
cin>>name;
cout<<"Enter student rollno";
cin>>rollno;
cout<<"Enter student makrs";
cin>>marks;
outf<<name<<endl;
outf<<rollno;
outf<<marks;
cout<<"Reading from file";
ifstream inf("kk.txt");
if(!inf)
{
cout<<"file not opening";

}
inf>>name;
inf>>rollno;
inf>>marks;
cout<<"\n\n\tcontents of file are"<<endl;
cout<<name<<endl;
cout<<rollno<<endl;
cout<<marks<<endl;
outf.close();
return 0;
}

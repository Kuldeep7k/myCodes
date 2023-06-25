#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
ifstream inf("kk.txt");
if(!inf)
{
cout<<"file cant open";
}
ofstream fout("dd.txt");
while(inf.eof()==0)
{
inf.get(ch);
fout.put(ch);
}
inf.close();
fout.close();
return 0;
}

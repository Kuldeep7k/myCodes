#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float y,float z)
{
return((3+5*y+2*z)/10);
}
float fy(float x,float z)
{
return((3+4*x+3*z)/10);
}
float fz(float x,float y)
{
return((-3-x-6*y)/10);
}
void main()
{
int i,n;
float x,y,z;
float x0,y0,z0;
printf("\t Number of Iterations :");
scanf("%d",&n);
x0=y0=z0=0;
for(i=1;i<=n;i++)
{
x=fx(y0,z0);
y=fy(x0,z0);
z=fz(x0,y0);
x0=x;
y0=y;
z0=z;
printf("\t \n\n x=%f,\t y=%f, \t z=%f",x,y,z);
}
getch();
}

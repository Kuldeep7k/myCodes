#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-x-1
void main()
{
float a,b,x,f0,f1,f2;
int i=0;
printf("Enter the value of a and b \n");
scanf("%f %f",&a,&b);
do
{
f0=f(a);
f1=f(b);
x=(a+b)/2;
f2=f(x);
if(f2<0)
{
a=x;
}
else
{
b=x;
}
i++;
printf("No of Iterations %d",i);
printf("\t Roots =%f",x);
printf("\t value of function =%f\n",f2);
}
while(fabs(f2)>e);
getch();
}

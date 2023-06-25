#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-3*x+1
#define df(x) 3*x*x-3
int main()
{
float x,x1;
float f0,f1,df0;
int i=0;
printf("Enter the value of x=\n");
scanf("%f",&x);
do
{
f0=f(x);
df0=df(x);
x1=x-(f0/df0);
f1=f(x1);
x=x1;
i++;
printf("Number of iteration =%d\t",i);
printf("Root =%f\t",x1);
printf("Value of function=%f\n",f1);
}
while(fabs(f1)>e);
getch();
return 0;
}

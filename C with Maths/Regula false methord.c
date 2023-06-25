#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-2*x-5
void main()
{
float a,b,c;
float fa,fb,fc;
int i=0;
printf("Enter the value of a and b \n");
scanf("%f %f",&a,&b);
do
{
fa=f(a);
fb=f(b);
c=((a*fb)-(b*fa))/(fb-fa);
fc=f(c);
if(fc>0)
{
b=c;
fb=fc;
}
else
{
a=c;
fa=fc;
}
i++;
printf("No of Iterations %d",i);
printf("\t Roots =%f",c);
printf("\t value of function =%f\n",fc);
}
while(fabs(fc)>e);
getch();
}

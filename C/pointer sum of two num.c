#include <stdio.h>
#include<conio.h>
main()
{
int a,b,c,*x,*y;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
x=&a;
y=&b;
c=*x+*y;
printf("sum is %u",c);
}

#include<stdio.h>
int fac(int);
main()
{
int num,fact;
printf("Enter a number");
scanf("%d",&num);
fact=fac(num);
printf("factorial is %d",fact);
}
int fac(int n)
{
if (n==0)
return (1);
return(n*fac(n-1));
}

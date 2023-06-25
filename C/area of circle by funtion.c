#include <stdio.h>
area (int);
main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
area(a);
getch();
}
area(int a)
{
int b=1,i;
for (i=1; i<=a; i++)
    b=b*i;
printf("factorial of  %d is %d",a,b);
}

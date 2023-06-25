#include <stdio.h>
main()
{
int a,b,temp;
printf("Enter two variables :");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("first %d",a);
printf("\n second. %d",b);
}

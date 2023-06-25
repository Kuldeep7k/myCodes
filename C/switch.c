#include <stdio.h>
#include <conio.h>
main()
{
int a,b,c,d;
printf("\n 1. Find odd or even");
printf("\n 2. Find positive or negative");
printf("\n 3. Find leap year or not");
printf("\n Enter your choice :");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n Enter any number :");
scanf("%d",&b);
if(b%2==0)
{
printf("\n No is even");
}
else
{
    printf("\n No is odd");
}
break;
case 2:
printf("\n Enter any number :");
scanf("%d",&c);
if(c>=0)
{

printf("\n No is Postivie");
}
else
{
    printf("\n No is Negative");
}
break;
case 3:
printf("\n Enter any number :");
scanf("%d",&d);
if(d/4==0)
{
printf("\n leap year");
}
    else
{

    printf("\n Not leap year");
}
break;
default :
    printf("Wrong input");
}
getch();
}

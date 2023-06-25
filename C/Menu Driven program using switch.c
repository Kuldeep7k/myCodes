#include <stdio.h>
#include <conio.h>
main()
{
int k,a,b,c,d,n,i=1,f=1,m,p,l, num, q = 0;
printf("\n 1. Find number is Odd or Even.");
printf("\n 2. Find number is positive or negative.");
printf("\n 3. Find leap year or not.");
printf("\n 4. Find Factorial of a Number.");
printf("\n 5. Find Multiplication Table of a Number.");
printf("\n 6. Find Prime Number or not.");
printf("\n \n Enter your Choice : ");
scanf("%d",&k);
switch (k)
{
case 1:
printf("\n Enter any Number :");
scanf("%d",&a);
if (a%2==0)
{
 printf("\n No. is Even.");
}
else
{
 printf("\n No. is Odd.");
}
break;
case 2:
printf("\n Enter any Number :");
scanf("%d",&b);
if (b>=0)
{
 printf("\n No. is Positive.");
}
else
{
printf("\n No. is Negative.");
}
break;
case 3:
printf("\n Enter any Number :");
scanf("%d",&c);
if(c%4==0)
{
 printf("\n Leap year.");
}
else
{
printf("\n Not Leap year.");
}
break;
case 4:
    printf("\n Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
break;
case 5:
    printf("\n Enter a number: ");
    scanf("%d",&m);
    printf("Multiplication Table of %d is: \n",m);
    for(p=1; p<=10; p++)
    {
        printf("%d * %d = %d \n",m, p, m*p);
    }
break;
case 6:
   printf("\n Enter a number:");
   scanf("%d", &num);
   for(l=1; l<=num; l++)
   {
      if(num%l==0)
      {
         q++;
      }
   }
   if(q==2)
   {
      printf("\n It is a prime number.");
   }
   else
   {
      printf("\n Not a prime number.");
   }
break;
default :
printf("Wrong input");
}
}

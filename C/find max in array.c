#include <stdio.h>
#include <conio.h>
main()
{
int a[5],max,i;
printf("Enter 5 array numbers");
for(i=0; i<5; i++)
{
scanf("%d",&a[i]);
if(max<a[i])
max=a[i];
}
printf("Max no is %d",max);
}

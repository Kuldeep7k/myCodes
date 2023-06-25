#include <stdio.h>
#include <conio.h>
main()
{
int arr[10],i,loc,size;
printf("Enter the size of an Array ");
scanf("%d",&size);
printf("Enter the Elements of Array ");
for(i=0;i<size; i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the location you want to delete ");
scanf("%d",&loc);
arr[loc-1]=0;
printf("After delete ");
for(i=0;i<size; i++)
{
    if(arr[i]==0)
        continue;
else
printf("%d ",arr[i]);
}
getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
int a[100],n,i;
void bubblesort(int [],int);
printf("Enter number of elements :");
scanf("%d",&n);
for(i=0; i<n;i++)
{
printf("Enter elements s[%d]=",i);
scanf("%d",&a[i]);
}
bubblesort(a,n);
printf("Sorted elements---");
for(i=0; i<n; i++)
printf("%d\t",a[i]);
getch();
}
void bubblesort(int a[],int n)
{
int temp,i,j;
for(i=1;i<=n-1;i++)
{
for(j=0;j<=n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}

#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[100];
void selectionsort(int a[],int n);
void display(int a[],int n);
printf("Enter number of elements :");
scanf("%d",&n);
for(i=0; i<n;i++)
{
printf("Enter elements s[%d]=",i);
scanf("%d",&a[i]);
}
printf("\nArray Before Sorting are---");
display(a,n);
printf("\nArray After Sorting are---");
selectionsort(a,n);
display(a,n);
getch();
}
void selectionsort(int a[],int n)
{
int i,j;
int loc,temp;
for(i=0;i<n-1; i++)
{
loc=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[loc])
loc=j;
}
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
}
void display(int a[],int n)
{
int i;
for(i=0; i<n; i++)
{
printf("%d\t",a[i]);
}
}

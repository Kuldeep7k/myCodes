#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[100];
void insertionsort(int a[],int n);
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
insertionsort(a,n);
display(a,n);
getch();
}
void insertionsort(int a[],int n)
{
int i,j,target;
for(i=1;i<n; i++)
{
target=a[i];
j=i-1;
while((j>=0) && (target<=a[j]))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=target;
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

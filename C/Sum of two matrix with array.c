#include <stdio.h>
#include <conio.h>
main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter first Matrix \t");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
scanf("%d",&a[i][j]);
}
printf("\n First Matrix \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
{
printf("Enter Second matrix \t");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
scanf("%d",&b[i][j]);
}
printf("\n Second Matrix \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}
printf("\n Sum of Matrix \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0; i<=1; i++)
for(j=0; j<=1; j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

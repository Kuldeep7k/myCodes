#include <stdio.h>
#include <conio.h>
main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
printf("Enter matrix A \t");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
scanf("%d",&a[i][j]);
}
printf("\n A Matrix \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
{
printf("Enter matrix b :\t");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
scanf("%d",&b[i][j]);
}
printf("\n b Matrix is \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
c[i][j]=0;
for(k=0; k<=j; k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("\n Multiplication of Matrix a and b is \n");
for(i=0; i<=1; i++)
{
for(j=0; j<=1; j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
}

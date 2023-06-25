#include <stdio.h>
#include <conio.h>
main()
{
int a[3][3],i,j;
printf("Enter Matrix \t");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
scanf("%d",&a[i][j]);
}
printf("\n Matrix \n");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n Transpose Matrix \n");
for(i=0; i<=2; i++)
{
for(j=0; j<=2; j++)
{

printf("%d\t",a[j][i]);
}
printf("\n");
}
}

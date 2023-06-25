#include <stdio.h>
#include <conio.h>
main()
{
int n,i,p;
printf("Enter a number");
scanf("$d",&n);
for(i=2; i<=n/2; i++)
{

p=n%i;
if(p==0)
{
printf("no is not prime");
getch();
goto end;
}
}
printf("prime no");
end:
getch();
}

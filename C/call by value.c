#include <stdio.h>
change();
main()
{
int a,b;
printf("Enter two no");
scanf("%d %d",&a,&b);
change(a,b);
printf("after %d %d",a,b);
}
change(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("inside %d %d",a,b);
}

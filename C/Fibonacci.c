#include<stdio.h>
#include<conio.h>
fab();
main()
{
    fab();
    getch();
}
fab()
{
    int a,b,c,d=0,e=1;
    printf("How many Fibonacci numbers :");
    scanf("%d",&a);
    printf("The Fibonacci Series is:\n %d \n %d",d,e);
    for(b=2; b<a; b++)
    {
        c=d+e;
        d=e;
        e=c;
        printf("\n %d",c);
    }
}

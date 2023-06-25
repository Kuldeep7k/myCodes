#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter an number: ");
    scanf("%d",&c);
    for(a=1; a<=c; a++)
    {
    for(b=1; b<=a; b++)
    {
    printf("*");
    }
    printf("\n");
    }
    getch();
}

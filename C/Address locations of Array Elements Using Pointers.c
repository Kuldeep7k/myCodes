#include<stdio.h>
main()
{
    int a[5]= {10,20,15,30,9};
    int *p=&a[0];
    int i;
    for(i=0; i<5; i++)
        printf("%d \n",*(p+i));
    for(i=0; i<5; i++)
        printf(" The Element %d is stored at %u\n",a[i],(p+i));
    getch();
}

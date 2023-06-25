#include<stdio.h>
#include<conio.h>
main()
{
   int  var[] = {10, 100, 200,700,900},i;
   for ( i = 0; i <5; i++)
{

       printf("val[%d]: value is %d and address is %u \n", i, var[i], &var[i]);
}
}

#include<stdio.h>
#include<conio.h>
main ()
{
   int  var[] = {10, 100, 200,700,900},i, *ptr[5];
   for ( i = 0; i <5; i++)
{
      ptr[i] = &var[i];
}
   for ( i = 0; i <5; i++)
{
      printf("Value of var[%d] = %u \n", i, *ptr[i] );
}
   getch();
}

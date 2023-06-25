#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char a[20]="Hello";
char b[20];
char c[20]="BCA";
strcpy(b,a);
strcat(a,c);
printf("Copy of a string in b is %s \n",b);
printf("concatenation of String a and c is %s",a);
getch();
}

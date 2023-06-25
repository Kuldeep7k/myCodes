#include <stdio.h>
int main()
{
  char c = 'c';
  int i = 123;
  printf("Address of 'c' %pn \n",&c);
  printf("Address of 'i' %pn",&i);
  getch();
}

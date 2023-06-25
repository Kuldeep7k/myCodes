#include<stdio.h>
#include <math.h>
#include<conio.h>
#define F(x,y)  x*y
void main()
{
  float y0,x0,y1,n,h,f,f1,k1,k2;
  printf("Enter the value of x0: ");
  scanf("%f",&x0);
  printf("Enter the value of y0: ");
  scanf("%f",&y0);
  printf("Enter the value of h: ");
  scanf("%f",&h);
  printf("Enter the value of last point: ");
  scanf("%f",&n);
  do
  {
    f=F(x0,y0);
    k1 = h * f;
    f1 = F(x0+h,y0+k1);
    k2 = h * f1;
    y1 = y0 + ( k1 + k2)/2;
    printf("\nk1 = %.f ",k1);
    printf("\nk2 = %.f ",k2);
    printf("\ny(%f) = %f ",x0+h,y1);
    x0=x0+h;
    y0=y1;
  } while(x0<n);
getch();
}

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x,y)  x+y*y
void main()
{
  float x0,y0,h,xn,yn,m,m1,m2,m3,m4,k1,k2,k3,k4;
  printf("Enter x0 : ");
  scanf("%f",&x0);
  printf("Enter y0 : ");
  scanf("%f",&y0);
  printf("Enter interval(h): ");
  scanf("%f",&h);
  printf("Enter last point: ");
  scanf("%f",&xn);
  do
  {
    m1=f(x0,y0);
    k1=h*m1;
    m2=f(x0+h/2,y0+k1/2);
    k2=h*m2;
    m3=f(x0+h/2,y0+k2/2);
    k3=h*m3;
    m4=f(x0+h,y0+k3);
    k4=h*m4;
    m=(k1+2*k2+2*k3+k4)/6;
    yn=y0+m;
    x0=x0+h;
    y0=yn;
      printf("\n  k1 = %f ",k1);
    printf("\n  k2 = %f ",k2);
    printf("\n  k3 = %f ",k3);
    printf("\n  k2 = %f ",k4);
  printf("\n\n Hence, y(%f)=%f",xn,yn);
  }while(x0<xn);

getch();
}

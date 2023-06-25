#include<stdio.h>
#include<math.h>
#define f(x) 1/((1+x)*(1+x))
main()
{
  int n,i;
  float a,b,h,x,sum=0,integral;
  printf("\nEnter the initial limit: ");
  scanf("%f",&a);
  printf("\nEnter the final limit: ");
  scanf("%f",&b);
  printf("\nEnter the no. of sub-intervals(EVEN): ");
  scanf("%d",&n);
  /*Begin Simpson's 1/3rd Procedure: */
  h=(b-a)/n;
  for(i=1;i<n;i++)
  {
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  printf("\nThe integral is: %f\n",integral);
}

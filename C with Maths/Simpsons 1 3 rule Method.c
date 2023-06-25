#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+x*x*x)
main(){
  int n,i;
  float a,b,h,x,sum=0,integral;
  printf("\nEnter the no. of sub-intervals(EVEN): ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%f",&a);
  printf("\nEnter the final limit: ");
  scanf("%f",&b);
  /*Begin Simpson's Procedure: */
  h=(b-a)/n;
    for(i=1;i<n;i++)
    {
    x=a+i*h;
    if(i%2==0)
    {
      sum=sum+2*f(x);
    }
    else
    {
      sum=sum+4*f(x);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %f\n",integral);
}

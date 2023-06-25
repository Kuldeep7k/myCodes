#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+x*x)
main(){
  int n,i;
  float a,b,h,x,sum=0,integral;
  printf("\nEnter the no. of sub-intervals(MULTIPLE OF 3): ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%f",&a);
  printf("\nEnter the final limit: ");
  scanf("%f",&b);
  h=(b-a)/n;
  for(i=1;i<n;i++)
    {
    x=a+i*h;
    if(i%3==0)
    {
      sum=sum+2*f(x);
    }
    else
    {
      sum=sum+3*f(x);
    }
  }
  integral=(3*h/8)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %f\n",integral);
}

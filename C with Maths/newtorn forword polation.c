#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
  float x[20],y[20],f,a,h,c,b;
  int j,i,n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  printf("Enter the elements of x:");
  for(i=1;i<=n;i++)
   {
        scanf("%f",&x[i]);
   }
  printf("Enter the elements of y:");
  for(i=1;i<=n;i++)
   {
        scanf("%f",&y[i]);
   }
  printf("Enter searching point fx:");
  scanf("%f",&f);
  h=x[2]-x[1];
  a=(f-x[1])/h;
  b=1;
  c=y[1];
  for(i=1;i<=n-1;i++)
  {
                   for(j=1;j<=n-i;j++)
                    {
                          y[j]=y[j+1]-y[j];

                    }
                    b=b*(a-i+1)/i;
                    c=c+b*y[1];
  }
  printf("For the value of x=%f The value is %f",f,c);
 getch();
}

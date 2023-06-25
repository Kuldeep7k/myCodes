#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define x1(x2,x3) ((17-(x2)+2*(x3))/20)
#define x2(x1,x3) ((-18-3*(x1)+(x3))/20)
#define x3(x1,x2) ((25-2*(x1)+3*(x2))/20)
void main()
{
float x1=0,x2=0,x3=0;
float y1,y2,y3;
int i=0;
printf("\t\n ------------------ \n");
printf("\t\n x1 \t\t x2 \t\t x3 \n");
printf("\t\n ------------------ \n");
printf("\t\n %f\t %f\t %f",x1,x2,x3);
do
{
y1=x1(x2,x3);
y2=x2(y1,x3);
y3=x3(y1,y2);
if(fabs(y1-x1)<e && fabs(y2-x2)<e && fabs(y3-x3)<e)
{
printf("\t\n ------------------ \n");
printf("\t\n The Roots are : \n");
printf("\t\n\n x1=%f",y1);
printf("\t\n\n x2=%f",y2);
printf("\t\n\n x3=%f",y3);
i=1;
}
else
{
x1=y1;
x2=y2;
x3=y3;
printf("\n %f \t %f\t %f",x1,x2,x3);
}
}
while(i!=1);
getch();
}

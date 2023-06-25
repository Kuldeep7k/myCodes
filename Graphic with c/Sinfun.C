#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
main()
{
int gd=DETECT,gm;
int x,y,i,a=0;
double j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Sin wave :\n");
x=getmaxx();
y=getmaxy();
line(0,y/2,x,y/2);
line((x/2)+5,0,(x/2)+5,y);
for (i=0;i<x;i+=3)
{
j=50*sin(a*3.141/180);
j=y/2-j;
putpixel(i,j,15);
a=a+5;
}
getch();
closegraph();
return 0;
}
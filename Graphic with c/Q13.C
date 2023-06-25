#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Q13 Resolution :\n");
x=getmaxx();
y=getmaxy();
printf("\n Resolution of x %d",x);
printf("\n Resolution of y %d",y);

getch();
closegraph();
return 0;
}
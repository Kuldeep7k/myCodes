#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
int x=20,y=200,n;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Pattren :\n");
n=getmaxx();

setcolor(15);
for(i=0;i<=110;i++)
{
cleardevice();
line(0,228,n,228);
setfillstyle(8,100);
circle(x,y,25);
floodfill(x,y,15);
x=x+5;
delay(50);
}
getch();
closegraph();
return 0;
}
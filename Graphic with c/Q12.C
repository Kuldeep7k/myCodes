#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
int x=90,y=90,n;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Q12 Pattren :\n");
setcolor(15);
for(i=0;i<=12;i++)
{
setfillstyle(i,100);
circle(x,y,20);
floodfill(x,y,15);
x=x+25;
y=y+25;

}
getch();
closegraph();
return 0;
}
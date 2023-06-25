#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int gd=DETECT,gm;
int i,n,a[]={258,203,157,203,207,49,258,203};
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Pattren :\n");
n=getmaxx();

setcolor(15);
for(i=0;i<=n-225;i++)
{
cleardevice();

line(0,330,n,330);
setcolor(4);
line(13+i,281,13+i,318);
line(49+i,281,69+i,248);
line(69+i,248,145+i,248);
line(145+i,248,176+i,281);
line(176+i,281,224+i,281);
line(224+i,281,224+i,316);
line(13+i,281,176+i,281);
line(13+i,318,43+i,318);
line(224+i,318,207+i,318);
line(80+i,318,169+i,318);
     setcolor(7);

circle(62+i,312,17);

circle(188+i,312,17);
setcolor(BROWN);
rectangle(199,203,217,269);
setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(4,a);

line(0,159,n,159);
line(0,175,n,175);
setcolor(13);
rectangle(270,120,460,220);
rectangle(290,140,440,180);
setcolor(BROWN);
rectangle(310,200,330,220);
rectangle(499,150,513,330);
setcolor(WHITE);
delay(17);
}

getch();
closegraph();
return 0;
}
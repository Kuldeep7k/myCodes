#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n EMoji 1:\n\n");
circle(200,175,80);
ellipse(165,150,0,360,10,10);
ellipse(235,150,0,360,10,10);
arc(200,190,180,0,40) ;

getch();
closegraph();
return 0;
}
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n HUT :\n");

rectangle(50,180,150,300);
rectangle(150,180,320,300);
rectangle(80,250,120,300);

line(100,100,50,180);
line(100,100,150,180);
line(100,100,270,100);
line(270,100,320,180);


getch();
closegraph();
return 0;
}
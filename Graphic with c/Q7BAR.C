#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n 3D BAR :\n");
line(50,300,300,300);
setcolor(RED);
line(50,300,50,50);
bar(100,150,125,300);


getch();
closegraph();
return 0;
}
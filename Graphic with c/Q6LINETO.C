#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Lineto and linerel function:\n\n");
printf("\n lineto white line :");
moveto(90,160);
lineto(250,160);

printf("\n linerel red Line :");
moveto(90,160);
setcolor(RED);
linerel(250,160);

getch();
closegraph();
return 0;
}
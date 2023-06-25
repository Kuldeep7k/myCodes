#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Moveto and linerel function:\n\n");
printf("Moveto red line :\n");
setcolor(4);
lineto(120,120);
moveto(120,120);
setcolor(11);
printf("\n\n\n\n\n\n\Linerel blue line :");
linerel(100,100);

getch();
closegraph();
return 0;
}
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Square using Line function:\n");
line(10,100,100,100);
line(10,150,100,150);
line(10,100,10,150);
line(100,100,100,150);

getch();
closegraph();
return 0;
}
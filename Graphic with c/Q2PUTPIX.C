#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\nMulticolorline using PutPixel :\n")   ;
for (i=40;i<=540;i++)
{
if(a<15)
a=0;
a=a+1;
putpixel(i,130,a);
}
getch();
closegraph();
return 0;
}
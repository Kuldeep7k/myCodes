#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Q11 Pattren :\n");
i=0;
for(a=33;a<=100;a=a+3)
{
circle(200,200,a);
setcolor(i);
i=i+1;

}
getch();
closegraph();
return 0;
}
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n EMoji 3:\n\n");
circle(200,175,90);
line(130,150,170,150) ;
line(230,150,270,150) ;
line(150,210,250,210) ;

getch();
closegraph();
return 0;
}
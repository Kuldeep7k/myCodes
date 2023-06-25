#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Line :\n")   ;
line(60,50,200,50);
printf("\n");
printf("\n Circle : \n");
circle(150,70,40);
printf("\n Rectangle : \n");
rectangle(100,100,300,150);
printf("\n\n arc : \n");
arc(120,210,0,120,50);
printf("\n Ellipse : \n");
ellipse(250,240,0,240,50,100);

getch();
closegraph();
return 0;
}
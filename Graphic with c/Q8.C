#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
int i,a,gd=DETECT,gm;
int l1,l2,l3,l4;
int c1,c2,c3;
int r1,r2,r3,r4;
int ac1,ac2,ac3,ac4,ac5;
int e1,e2,e3,e4,e5,e6;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\t Q8. Menu Driven All Shapes :-\n\n");
printf("Please Enter To Draw :\n 1.Line\n 2.Circle\n 3.Rectangle\n 4.Arc\n 5.Ellipse :\n\n");
scanf("%d",&i);
switch(i)
{
case 1:
printf("Enter line x1,y1,x2,y2 :");
scanf("%d %d %d %d",&l1,&l2,&l3,&l4);
printf("\n1.Line:\n");
line(l1,l2,l3,l4);
//line(60,250,200,250);
break;
case 2:
printf("Enter Circle x,y and Radius :");
scanf("%d %d %d",&c1,&c2,&c3);
printf("\n 2.Circle : \n");
circle(c1,c2,c3);
break;

case 3:
printf("Enter Rectangle x1,y1,x2,y2 :");
scanf("%d %d %d %d",&r1,&r2,&r3,&r4);
printf("\n 3.Rectangle :\n");
rectangle(r1,r2,r3,r4);
break;

case 4:
printf("Enter Arc x,y,Start_angle,End_angle and Radius :");
scanf("%d %d %d %d %d",&ac1,&ac2,&ac3,&ac4,&ac5);
printf("\n 4.Arc : \n");
arc(ac1,ac2,ac3,ac4,ac5);
break;
case 5:
printf("Enter Ellipse x,y,Start_angle,End_angle,x_Radius and y_Radius:");
scanf("%d %d %d %d %d %d",&e1,&e2,&e3,&e4,&e5,&e6);
printf("\n 5.Ellipse : \n");
ellipse(e1,e2,e3,e4,e5,e6);
break;
default   :
printf("\n Wrong Input \n");
}

getch();
closegraph();
return 0;
}
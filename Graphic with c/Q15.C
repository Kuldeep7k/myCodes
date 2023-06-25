#include <graphics.h>
#include <conio.h>
#include <stdio.h>
void main()
{
int gd=DETECT,gm,d=0;
int i,x;
float a[4],o[4],y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\n Histogram Graph of Population :\n");
printf("Enter the Population of 4 City :");
for(i=0;i<=3;i++)
{
scanf("%f",&a[i]);
d=a[i];
}
settextstyle(0,1,2);
outtextxy(90,200,"Population");
settextstyle(0,0,2);
outtextxy(150,430,"Countries");

line(100,400,400,400);
line(100,100,100,400);

//bar(140,250,170,400);
//bar(200,250,230,400);
x=140;
y=170;
//d=a[0]+a[1]+a[2]+a[3];
//printf("%f",&d);
for(i=0; i<=3; i++ )
{
o[i]=400-((a[i]/d)*300);
}
for(i=0; i<=3; i++)
{
bar(x,o[i],y,400);

if(x<=320)
{
x=x+60;
y=y+60;
}
}
settextstyle(0,0,0);
outtextxy(140,410,"City 1");
outtextxy(200,410,"City 2");
outtextxy(260,410,"City 3");
outtextxy(320,410,"city 4");
getch();
}
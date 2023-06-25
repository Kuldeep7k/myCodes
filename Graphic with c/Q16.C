#include <graphics.h>
#include <conio.h>
#include <stdio.h>
void main()
{
int gd=DETECT,gm,i,c=1,b=1;
float a[4],o[4],y=0,end=0,start=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t Kuldeep 8033 \n");
printf("\nPie chart of Population :\n");
printf("Enter the Population of 4 City :");
for(i=0;i<=3;i++)
{
scanf("%f",&a[i]);
y=a[i];
}
for(i=0;i<=3;i++)
{
o[i]=(a[i]/y)*360.00;

}
printf("1. Blue %f \n",a[0]);
printf("2. Green %f \n",a[1]);
printf("3. cyan %f \n",a[2]);
printf("4. red %f \n",a[3]);

start=0;
end=o[0];
for(i=0;i<4;i++)
{
if(i==3)
{
end=360;
}
setfillstyle(c,b);
pieslice(100,300,start,end,80);
start=end;
end=end+o[i];
c++;
b++;
}
getch();
}
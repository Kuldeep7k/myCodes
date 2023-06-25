#include<stdio.h>
#include<conio.h>
struct std
{
char name[10];
int age;
int class1;
};
int main()
{
struct std s;
printf("Enter name, Roll number , Class of a Student ");
scanf("%s %d %d",&s.name,&s.age,&s.class1);
printf("  Student name is %s .\n Roll number is %d of class %d .",s.name,s.age,s.class1);
getch();
}

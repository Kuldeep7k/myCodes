import java.io.*;
import java.lang.*;
import java.util.*;

class percentageofmarks
{
byte rollno,m1,m2,m3,m4,m5;
float per;
String name;

void enterdata()
{
Scanner s=new Scanner(System.in);
PrintStream p=new PrintStream(System.out);
p.println("Enter Name of student :");
name=s.nextLine();
p.println("Enter Rollno :");
rollno=s.nextByte();
p.println("Enter marks1 :");
m1=s.nextByte();
p.println("Enter marks2 :");
m2=s.nextByte();
p.println("Enter marks3 :");
m3=s.nextByte();
p.println("Enter marks4 :");
m4=s.nextByte();
p.println("Enter marks5 :");
m5=s.nextByte();
}

void printdata()
{
PrintStream p=new PrintStream(System.out);
p.println("Name of student :"+name);
p.println("Rollno :"+rollno);
p.println("Percentage is :"+per);
}

void cal()
{
per=m1+m2+m3+m4+m5;
per=per/500*100;
}

public static void main(String a[])
{
percentageofmarks obj1=new percentageofmarks();
obj1.enterdata();
obj1.cal();
obj1.printdata();
}
}
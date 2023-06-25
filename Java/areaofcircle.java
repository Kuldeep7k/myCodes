import java.io.*;
import java.lang.*;
import java.util.*;
class areaofcircle
{
int r;
double a;

void enterdata()
{
Scanner s=new Scanner(System.in);
r=s.nextInt();
}

void cal()
{
a=3.14*r*r;
PrintStream ps=new PrintStream(System.out);
ps.println("Area of circle radius "+r+" is ="+a);
}

public static void main(String arr[])
{
areaofcircle obj1=new areaofcircle();
obj1.enterdata();
obj1.cal();
}
}
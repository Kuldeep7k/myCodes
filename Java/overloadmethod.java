import java.io.*;
import java.lang.*;

class overloadmethod
{
PrintStream ps=new PrintStream(System.out);
void sum(int a,int b)
{
int c=a+b;
ps.println("Total is :"+c);
}

void sum(int a,int b,int c)
{
int d=a+b+c;
ps.println("Total is :"+d);
}

void sum(long a,float b)
{
float c=a+b;
ps.println("Total is :"+c);
}

void sum(float a,long b)
{
float c=a+b;
ps.println("Total is :"+c);
}

void sum(float a,double b)
{
double c=a+b;
ps.println("Total is :"+c);
}

public static void main(String arr[])
{
overloadmethod obj1=new overloadmethod();
obj1.sum(7,8);
obj1.sum(7,8,9);
obj1.sum(500l,56665.7f);
obj1.sum(566.997f,200l);
obj1.sum(566.7f,19.99d);
}
}
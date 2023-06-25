import java.io.*;
import java.lang.*;

class areas extends trigno
{
PrintStream ps=new PrintStream(System.out);

void circle(double r)
{
double area=3.14*r*r;
ps.println("Area of cicle is :"+area);
}
void rect(int l,int b)
{
int area=l*b;
ps.println("Area of rectangle is :"+area);
}
void square(int side)
{
int area=side*side;
ps.println("Area of square is :"+area);
}

void show()
{
ps.println("Bye");
}

public static void main(String a[])
{
areas obj=new areas();
obj.rect(8,6);
obj.circle(7);
obj.show();
}
}
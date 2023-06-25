import java.io.*;
import java.lang.*;
import java.util.*;

class first
{
PrintStream ps=new PrintStream(System.out);
int a,b;
first()
{
ps.println("Super class default constructor");
}
first(int i,int j)
{
a=i;
b=j;
ps.println("a :"+a);
ps.println("b :"+b);
}
}

class second extends first
{
int c;
second()
{
//super(); //this is for super default constuctor but it do not need if we want to run super class default constructor
super(9,8); //calling super class parameterized constructor

c=100;
ps.println("Sub class default constructor");
ps.println("c :"+c);
}

public static void main(String arr[])
{
second ss=new second();
}
}
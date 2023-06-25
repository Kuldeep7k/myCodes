import java.io.*;
import java.lang.*;
import java.util.*;

class egofdefval
{
double x;
String n;
boolean s;
void print()
{
PrintStream ps=new PrintStream(System.out);
ps.println(x+"  "+n+"  "+s);
}

public static void main(String a[])
{
egofdefval obj1=new egofdefval();
obj1.print();
}
}
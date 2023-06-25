import java.io.*;
import java.lang.*;
import java.util.*;

class second 
{
public int a;
public int b;
public int c;
protected void method2()
{
PrintStream ps=new PrintStream(System.out);
ps.println("Enter a and b :");
Scanner s=new Scanner(System.in);
a=s.nextInt();
b=s.nextInt();
c=a*b;
ps.println("a * b :"+c);
}
}
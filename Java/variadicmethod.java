import java.io.*;
import java.lang.*;
import java.util.*;

class variadicmethod
{
static int total=0;
PrintStream ps=new PrintStream(System.out);

void sum(int ... a) //variadic method
{
total=0;
for(int b: a)
{
total=total+b;
}
ps.println("Values are :");
for (int c: a)
{
ps.print(" "+c);
}
ps.println("\n Total of actual values in methord :"+total);
System.gc();
}

public static void main(String arr[])
{
variadicmethod obj1=new variadicmethod();
variadicmethod obj2=new variadicmethod();
obj1.sum(1,2,3,4,5,6,7,8,9);
obj2.sum(800,-900,100000);
}

}
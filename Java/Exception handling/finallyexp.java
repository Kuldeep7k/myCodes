import java.io.*;
import java.util.*;

class finallyexp
{
public static void main(String g[])
{
Scanner s=new Scanner(System.in);
int a,b,c=0;
System.out.println("Enter 2 Numbers :");

try
{
a=s.nextInt();
b=s.nextInt();
c=a/b;
System.out.println("Division done");
System.out.println("The result is :"+c);
}
catch(ArithmeticException e)
{
System.out.println("You have entered inappropriate values");
}
finally
{
System.out.println("---- Be very careful while entering the values-------");
}

System.out.println("End of Application");

}
}
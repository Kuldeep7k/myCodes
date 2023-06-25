import java.io.*;
import java.util.*;

class trycode
{
public static void main(String x[])
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
}
catch(ArithmeticException e)
{
System.out.println("You have entered inappropriate values");
System.out.println("try Again");
System.out.println("Enter 2 Numbers :");
a=s.nextInt();
b=s.nextInt();
c=a/b;
System.out.println("Division done");
}
System.out.println("The result is :"+c);
System.out.println("End of Application");

}
}
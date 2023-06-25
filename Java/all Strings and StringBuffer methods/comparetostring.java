import java.io.*;
import java.util.*;

class comparetostring
{
public static void main(String arr[])
{
String a,b;
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);
ps.println("Enter two Strings:");
a=s.nextLine();
b=s.nextLine();

int c=a.compareTo(b);

if(c>0)
{
ps.println("unsorted");
}
else if(c<0)
{
ps.println("sorted");
}
else 
{
ps.println("Both Identical");
}
}
}
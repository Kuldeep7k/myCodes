import java.io.*;
import java.util.*;

class stringobj
{
public static void main(String arr[])
{
String name=new String();
PrintStream ps=new PrintStream(System.out);
name="Kuldeep";
String a;
ps.println("Enter a name :");
Scanner s=new Scanner(System.in);
a=s.nextLine();
System.out.println("You :"+name);
ps.println("And you :"+a);
}
}
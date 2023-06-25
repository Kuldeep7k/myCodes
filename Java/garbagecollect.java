import java.io.*;
import java.lang.*;
import java.util.*;

class garcollect
{
String name;
PrintStream ps=new PrintStream(System.out);
void dis()
{
Scanner s=new Scanner(System.in);
ps.println("Enter your name :");
name=s.nextLine();
}
 

public void finalize()
{
System.out.println("this name :"+name+" object is deleted");
}


public static void main(String a[])
{
garcollect d1=new garcollect();
garcollect d2=new garcollect();


d1.dis();
d2.dis();

d1=null;
System.gc();
d2=null;
System.gc();
}
}
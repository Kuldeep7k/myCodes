import java.io.*;
import java.util.*;

class indexof
{
public static void main(String arr[])
{
PrintStream ps=new PrintStream(System.out);
String a="Hello how are you";
String b="h";
ps.println("String a is:"+a);
ps.println("String b is:"+b);
int c=a.indexOf(b);
c=c+1;
ps.println("Position of b in a is :"+c);
if (c==-1)
{
ps.println("b not found");
}
else 
{
ps.println("b found");
}

}
}
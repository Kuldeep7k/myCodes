import java.io.*;
import java.util.*;

class equals
{
public static void main(String arr[])
{
PrintStream ps=new PrintStream(System.out);
String a="Hello  how are you";
String b="Hello how are you";
ps.println("String a is:"+a);
ps.println("String b is:"+b);
boolean c=a.equals(b);
if (c==true)
{
ps.println("Both Equal");
}
else 
{
ps.println("Both not Equal");
}
}
}
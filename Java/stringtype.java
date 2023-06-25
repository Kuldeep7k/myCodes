import java.io.*;
import java.lang.*;
import java.util.*;

class stringtype
{
public static void main(String arr[])
{
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);
String st;
ps.print("Welcome Enter your name ");
st=s.nextLine();
ps.println(st);
}
}
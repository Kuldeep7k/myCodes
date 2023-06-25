import java.util.*;
import java.io.*;

class append
{
public static void main(String arr[])
{
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);
StringBuffer s1=new StringBuffer("hello!");
ps.println(s1);
String s2=" Pawan";
s1.append(s2);
ps.println(s1);

}
}
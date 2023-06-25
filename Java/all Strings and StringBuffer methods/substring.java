import java.io.*;
import java.util.*;

class substring
{
public static void main(String arr[])
{
String a="Hello.How are you,Welcome to Dav";
String b=a.substring(6);
String c=a.substring(6,13);
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);

ps.println("String is : "+a);
ps.println("New is String : "+b);
ps.println("New is String : "+c);
}
}
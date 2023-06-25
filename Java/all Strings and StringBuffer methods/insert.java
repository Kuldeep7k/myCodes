import java.util.*;
import java.io.*;

class insert
{
public static void main(String arr[])
{
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);
StringBuffer s1=new StringBuffer("hello, how are you");

ps.println(s1);

s1.insert(s1.indexOf(",")," YO");

ps.println("After insert :"+s1);
}
}
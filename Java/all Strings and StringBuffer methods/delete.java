import java.util.*;
import java.io.*;

class delete
{
public static void main(String arr[])
{
Scanner s=new Scanner(System.in);
PrintStream ps=new PrintStream(System.out);
StringBuffer s1=new StringBuffer("hello, (howwww) are you");

ps.println(s1);

s1.delete(s1.indexOf("("),s1.indexOf(")")+1);

ps.println(s1);
}
}
import java.io.*;
import java.lang.*;
import java.util.*;

final class first
{
byte roll;
String name;
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
void get()
{

ps.println("Enter your name and Roll no :");
name=s.nextLine();
roll=s.nextByte();

ps.println("Name is :"+name);
ps.println("Roll no is :"+roll);
}
}
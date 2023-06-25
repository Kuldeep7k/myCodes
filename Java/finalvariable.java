import java.io.*;
import java.lang.*;
import java.util.*;

class student
{
final int acard;
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);

student()
{
ps.println("Please Enter a card no:");
ps.println("This value cannot be modified later on :");
acard=s.nextInt();
}

void data()
{
ps.println("welcome, Card no is:"+acard);
acard=s.nextInt(); //ERROR final value cant be changed
}

public static void main(String arr[])
{
student s1=new student();
s1.data();

}
}
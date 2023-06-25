import java.io.*;
import java.lang.*;
import java.util.*;

class Cloneandcopy implements Cloneable
{
String name;
byte rollno;
float per;
short sch;

Cloneandcopy(){}

Cloneandcopy(Cloneandcopy f)
{
name=f.name;
rollno=f.rollno;
}

void get()
{
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
ps.println("Enter name,rollno,percentage and marks :");
name=s.nextLine();
rollno=s.nextByte();
per=s.nextFloat();
sch=s.nextShort();
}

void dis()
{
PrintStream ps=new PrintStream(System.out);
ps.println("\n\n----------------------");
ps.println("Name :"+name);
ps.println("Rollno :"+rollno);
ps.println("percentage :"+per);
ps.println("Marks :"+sch);
}

public static void main(String arr[]) throws Exception
{
Cloneandcopy f1=new Cloneandcopy();
f1.get();
Cloneandcopy f2=(Cloneandcopy)f1.clone();

Cloneandcopy f3=new Cloneandcopy(f1);

f1.dis();
f2.dis();
f3.dis();
}

}
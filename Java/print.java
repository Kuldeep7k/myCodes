import java.io.*;
import java.lang.*;
import java.util.*;

class print
{
byte rollno;
String name;

void enterdata()
{
Scanner s=new Scanner(System.in);
PrintStream p=new PrintStream(System.out);
p.println("Enter Name of student :");
name=s.nextLine();
p.println("Enter Rollno :");
rollno=s.nextByte();

}

void printdata()
{
PrintStream p=new PrintStream(System.out);
p.println("Name of student :"+name);
p.println("Rollno :"+rollno);
}

public static void main(String a[])
{
print obj1=new print();
obj1.enterdata();
obj1.printdata();

print obj2=new print();
obj2.enterdata();
obj2.printdata();
}
}
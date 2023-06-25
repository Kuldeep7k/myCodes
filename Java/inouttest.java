import java.io.*;
import java.lang.*;
import java.util.*;
class inouttest
{
public static void main(String arr[])
{
int a,b,c;
PrintStream pt=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
pt.print("Enter A : ");
a=s.nextInt();
pt.print("Enter B : ");
b=s.nextInt();
c=a+b;
pt.println("A+B="+c);
pt.printf("A=%d b=%d Addition is =%d",a,b,c);
}
}
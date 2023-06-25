import java.io.*;
import java.lang.*;
import java.util.*;

class clonecons implements Cloneable
{
int a,b,d;
PrintStream ps=new PrintStream(System.out);

clonecons() //Default constructor
{

}
clonecons(clonecons c) //copy constructor created
{
a=c.a;
b=c.b;
}
void get()
{
ps.println("Hello enter a and b  :");
Scanner s=new Scanner(System.in);
a=s.nextInt();
b=s.nextInt();
}
void dis()
{
ps.println("value of a :"+a);
ps.println("value of b :"+b);
}

public static void main(String arr[]) throws Exception
{
clonecons obj1=new clonecons(); //call to Default constructor and object created
obj1.get();
obj1.dis();

clonecons obj2=new clonecons(obj1); //call to copy constructor and object created
obj2.dis();
}
}
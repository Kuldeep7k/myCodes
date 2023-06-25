import java.io.*;
import java.lang.*;
import java.util.*;

class staticmethod
{
PrintStream ps=new PrintStream(System.out);
static void method1()
{
PrintStream ps=new PrintStream(System.out);
ps.println("Welcome to static method");
}

void method2()
{
ps.println("Welcome to simple method");
}

public static void main(String a[])
{
staticmethod.method1(); //call static method
staticmethod obj=new staticmethod();
obj.method2();
}
}
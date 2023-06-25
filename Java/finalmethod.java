import java.io.*;
import java.lang.*;
import java.util.*;

class finalmeth1
{
PrintStream ps=new PrintStream(System.out);
 final void show1()
{
ps.println("Method1");
}

void show2()
{
ps.println("Method2");
}
}
class finalmeth2 extends finalmeth1
{
void show1()  //ERROR here final method can't overridden 
{
ps.println("Method1 of sub class");
}
void show2()
{
ps.println("Method2 of sub class");
}

public static void main(String arr[])
{
finalmeth2 obj=new finalmeth2();
obj.show1();
obj.show2();
}
}

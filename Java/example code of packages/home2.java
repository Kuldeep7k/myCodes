import first.*;
import second.*;
import java.io.*;
import java.lang.*;
import java.util.*;

//classes in different packages
class home2
{
void dis3()
{
PrintStream ps=new PrintStream(System.out);
ps.println("Main Class Hello how are you");
}

public static void main(String arr[])
{
a obj=new a();
b obj2=new b();
home obj3=new home();
obj.dis();
obj2.dis2();
obj3.dis3();
}
}
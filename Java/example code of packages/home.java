import first.*;
import first2.a;
import java.io.*;
import java.lang.*;
import java.util.*;

//same classes in different packages
class home
{
void dis3()
{
PrintStream ps=new PrintStream(System.out);
ps.println("Main Class Hello how are you");
}

public static void main(String arr[])
{
first.a obj=new first.a(); //mention package name of classes
first2.a obj2=new first2.a();
home obj3=new home();
obj.dis();
obj2.dis2();
obj3.dis3();
}
}
import java.io.*;
import java.lang.*;
import java.util.*;

class first
{
PrintStream ps=new PrintStream(System.out);
void dis()
{
ps.println("this is first fucntion");
}
}

class second extends first
{
void dis()
{
ps.println("this is second fucntion");
}

public static void main(String a[])
{
second s=new second();
s.dis();
PrintStream ps=new PrintStream(System.out);
ps.println("now second function print :");
first f=new first();
f.dis();

}
}
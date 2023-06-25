import java.io.*;
import java.lang.*;
import java.util.*;

class one
{
PrintStream ps=new PrintStream(System.out);

void show()
{
ps.println("This is super class method");
}
}

class two extends one 
{

void supershow()
{
super.show(); //this will call overridden super method show will called
}
void show()
{

ps.println("This is sub class method");
}

public static void main(String a[])
{
two obj=new two();
obj.supershow();
obj.show();
} 
}
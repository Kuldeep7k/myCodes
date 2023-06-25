import java.io.*;
import java.lang.*;
import java.util.*;

class onefirst
{
PrintStream ps=new PrintStream(System.out);
int i=7;
}

class twosecond extends onefirst
{
float i=9.01f;
void show()
{
ps.println("Show i value of super class is :"+super.i);
ps.println("Show i value of sub class is :"+i);
}
public static void main(String arr[])
{
twosecond obj=new twosecond();
obj.show();
}
}
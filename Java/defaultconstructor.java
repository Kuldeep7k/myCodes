import java.io.*;
import java.lang.*;
import java.util.*;

class defcons
{
int a;
int b;
PrintStream ps=new PrintStream(System.out);

defcons()
{
a=10;
b=20;
}
 
void dis()
{

ps.println("a :"+a);
ps.println("b :"+b);
}

public static void main(String arr[])
{
defcons obj1=new defcons();
defcons obj2=new defcons();
obj1.dis();
obj2.dis();
}
}
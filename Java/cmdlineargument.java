import java.io.*;
import java.lang.*;

class cmdlineargument
{
public static void main(String a[])
{
PrintStream ps=new PrintStream(System.out);
if(a.length>=2)
{
ps.println("Welcome "+a[0]+" From "+a[1]);
}
else
{
ps.println("Have a Nice day");
}
}
}
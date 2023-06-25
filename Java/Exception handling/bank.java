import java.io.*;
import java.util.*;

class bank
{
public static void main(String x[])
{
Scanner s=new Scanner(System.in);
int a;
System.out.println("Entern a Number :");
a=s.nextInt();

if(a>200000)
{
try
{
throw new deposit(); //exception generated explicitly
}
catch(deposit e)
{
System.out.println("Renter the amount to be withdrawn");
a=s.nextInt();
System.out.println(a+" withdrawn .THANKS!");
}
}
else
{
System.out.println("End of Application");
}
}
}
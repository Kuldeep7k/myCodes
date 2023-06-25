import java.io.*;

class maintd
{
public static void main(String arr[])
{
try{
System.out.println("Current Thread is "+Thread.currentThread());
System.out.println("Current Thread is "+Thread.currentThread().getPriority());
}
catch(Exception e)
{
}
}
}
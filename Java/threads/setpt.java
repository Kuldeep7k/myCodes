import java.io.*;

class setpt1 extends Thread
{
public void run()
{
System.out.println("Thread Priority is "+getPriority());
}
}
class setpt
{
public static void main(String arr[])
{
setpt1 f=new setpt1();
f.setPriority(8);
f.start();
}
}
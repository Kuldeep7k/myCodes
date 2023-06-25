import java.io.*;

class count1 implements Runnable
{
Thread t;
int i;
one1()
{
t=new Thread(this);
t.start();
}
public void run()
{
for (i=20; i>=1; i--)
{
System.out.print(i);
System.out.println(" Current Thread Name is "+Thread.currentThread()+" and Priority is "+Thread.currentThread().getPriority());

try
{
t.sleep(2000);
}
catch(Exception e){}

}
}
}
class count
{
public static void main(String arr[])
{
one1 oo=new one1();
}
}
 /* hhhh */
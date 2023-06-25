import java.io.*;

class one1 implements Runnable
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
for (i=1; i<20; i=i+2)
{
System.out.println(i);
try
{
t.sleep(2000);
}
catch(Exception e){}
}
}
}

class one
{
public static void main(String arr[])
{
one1 oo=new one1();
}
}
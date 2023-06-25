import java.io.*;

class a
{
public void dis()
{
System.out.println("Hello !!!!");
}
}

class b extends a implements Runnable
{
Thread t;
int i;
public b()
{
t=new Thread(this);
t.start();
}

public void run()
{
for(i=0; i<10; i++)
{
dis();
System.out.println(i);
try
{
t.sleep(2000);

}
catch (Exception e){}
}
}
}

class demo
{
public static void main(String arr[])
{
b gg= new b();
}
}
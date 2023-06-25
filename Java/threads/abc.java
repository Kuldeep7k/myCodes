import java.io.*;
import java.lang.*;

class alpha extends Thread
{

public alpha()
{
start();
}
public void run()
{
    int i;
for(i=65;i<=90;i++)
{
System.out.print((char)i+"  ");
try
{
sleep(1000);
}
catch(Exception e)
{

}
}
}
}

class second extends Thread
{

public second()
{
start();
}
public void run()
{
    int i;
for(i=97;i<=122;i++)
{
System.out.println((char)i+"  ");
try
{
sleep(1000);
}
catch(Exception e)
{

}
}
}
}

class twothread
{
public static void main(String arr[])
{
alpha o=new alpha();
second s=new second();
}
}
import java.io.*;
import java.lang.*;

class first extends Thread
{
int i;
public first()
{
start();
}
public void run()
{
for(i=10;i>=1;i--)
{
System.out.println(i);
}
}
}

class demo 
{
public static void main(String arr[])
{
first f=new first();
}
}
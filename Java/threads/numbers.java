import java.io.*;

class numbers extends Thread
{
String a[]={"one","two","three","four","five","six","sever","Eight","Nine","ten"};

public numbers()
{
start();
}

public void run()
{
for(int i=0; i<10; i++)
{
System.out.println(a[i]);
try {
sleep(2000); } catch(Exception e){}
}
}
}

class bca
{
public static void main(String arr[])
{
numbers nn=new numbers();
}
}
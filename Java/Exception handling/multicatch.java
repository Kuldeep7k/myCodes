import java.io.*;
import java.util.*;

class multicatch
{
public static void main(String xx[])
{
int data[]=new int[5];
Scanner s=new Scanner(System.in);
System.out.println("Enter 2 numbers and also tell where they should be stored respectivily");

int x,y,i,j;
x=s.nextInt();
y=s.nextInt();
i=s.nextInt();
j=s.nextInt();
int res=1;
try
{
data[i]=x;
data[j]=y;
res=data[i]/data[j];
}
catch (ArithmeticException e)
{
System.out.println("Divide by 0 not allowed.Renter data :");
x=s.nextInt();
y=s.nextInt();
data[i]=x;
data[j]=y;
res=data[i]/data[j];
}
catch (ArrayIndexOutOfBoundsException e)
{
System.out.println("Wrong index number entered.Renter index again :");
i=s.nextInt();
j=s.nextInt();
data[i]=x;
data[j]=y;
res=data[i]/data[j];
}
System.out.println("The result is :"+res);
}
}
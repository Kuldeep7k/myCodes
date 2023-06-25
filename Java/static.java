import java.io.*;
import java.lang.*;
import java.util.*;

class bank
{
int i,p,t;
static int rate=6;

void cal()
{
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
ps.printf("Enter p and t :");
p=s.nextInt();
t=s.nextInt();
i=(p*rate*t)/365;
ps.printf("The interset is :"+i);
}

public static void main(String a[])
{
PrintStream ps=new PrintStream(System.out);
ps.println("Welcome to the Bank app.");
ps.println("Bank interest rate is "+bank.rate);
bank obj1=new bank();
obj1.cal();
}
}
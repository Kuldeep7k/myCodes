import java.io.*;

class test implements inter1,inter2
{
PrintStream ps=new PrintStream(System.out);
public void enter()
{
ps.println("Welcome to fist method of inter1");
}
public void exit()
{
ps.println("Goodbye!");
}

public void show()
{
ps.println("Welcome to fist method of inter2");
}

void tax()
{
java.util.Scanner s=new java.util.Scanner(System.in);
ps.println("Enter Principal amount and time period :");
int p=s.nextInt();
int t=s.nextInt();
int i=(p*a*t)/100;
ps.println("The interest is "+i);
}

public static void main(String arr[])
{
test obj=new test();
obj.enter();
obj.show();
obj.tax();
obj.exit();
}
}
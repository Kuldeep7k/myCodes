import java.io.*;
import java.lang.*;
import java.util.*;

class arraysort
{
int i;
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int arr[]=new int[n];

void get()
{
ps.printf("Enter All %d element :",n);
for (i=0;i<n;i++)
{
arr[i]=s.nextInt();
}

}
void dis()
{
Arrays.sort(arr);
ps.println("Array elements are :");
for (i=0;i<n;i++)
{
ps.print(arr[i]+"  ");
}
}

public static void main(String a[])
{
PrintStream ps=new PrintStream(System.out);
ps.println("Enter no of element :");
arraysort obj= new arraysort();
obj.get();
obj.dis();
}
}


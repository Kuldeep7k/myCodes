import java.io.*;
import java.lang.*;
import java.util.*;

class arrayforeach
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
Arrays.sort(arr); // Array sort
ps.println("Array elements are :");
for (int E:arr)  // For-each loop
{
ps.print(E+"  ");
}
}

public static void main(String a[])
{
PrintStream ps=new PrintStream(System.out);
ps.println("Enter no of element :");
arrayforeach obj= new arrayforeach();
obj.get();
obj.dis();
}
}


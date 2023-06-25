import java.io.*;
import java.lang.*;
import java.util.*;

class multiarray
{
int i,j;
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
int row=s.nextInt();
int cols=s.nextInt();
int arr[][]=new int[row][cols];
void get()
{
ps.println("Enter array elements :");
for(i=0;i<row;i++)
{
for(j=0;j<cols;j++)
{
arr[i][j]=s.nextInt();
}
}
}

void dis()
{
ps.println("Array Matrix is :");
for(i=0;i<row;i++)
{
for(j=0;j<cols;j++)
{
ps.print(" "+arr[i][j]);
}
ps.println("\n");
}
}
public static void main(String a[])
{
PrintStream ps=new PrintStream(System.out);
ps.println("Enter array rows and cols :");
multiarray obj=new multiarray();
obj.get();
obj.dis();
}
}
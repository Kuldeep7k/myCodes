import java.io.*;
import java.lang.*;
import java.util.*;

class binarysearch
{
public static void main(String g[])
{
int i,size,t;
int arr[];
PrintStream ps=new PrintStream(System.out);
Scanner s=new Scanner(System.in);
ps.println("Enter no of element :");
size=s.nextInt();
arr=new int[size];
ps.println("Enter All elements :");
for(i=0;i<size;i++)
{
arr[i]=s.nextInt();
}
ps.println("Enter no to be Searched :");
t=s.nextInt();

Arrays.sort(arr);

ps.println("Postion of search element is :"+t);
int temp=Arrays.binarySearch(arr,t);
ps.println("All Array elements :");
for(i=0;i<size;i++)
{
ps.printf(" "+arr[i]);
}
temp=temp+1;
ps.println("\n Postion of search element is :"+temp);

}
}
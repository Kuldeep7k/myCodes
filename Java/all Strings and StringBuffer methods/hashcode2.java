import java.util.*;

class hashcode2
{
public static void main(String arr[])
{
StringBuffer a=new StringBuffer("India");
System.out.println(a);
System.out.println(a.hashCode());

Scanner s=new Scanner(System.in);
System.out.println("Enter a String for Buffer class :");
StringBuffer b=new StringBuffer(s.nextLine());
 
System.out.println(b);
System.out.println(b.hashCode());
}
}
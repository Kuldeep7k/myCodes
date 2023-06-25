class hashcode
{
public static void main(String arr[])
{
String a=new String("India");
System.out.println(a);
System.out.println(a.hashCode());
a="Hello"+a;
System.out.println(a); 
System.out.println(a.hashCode());

String b=new String("       What!!       ");
System.out.println(b);
System.out.println(a.hashCode());
b=b.trim();
System.out.println(b); 
System.out.println(b.hashCode());
}
}
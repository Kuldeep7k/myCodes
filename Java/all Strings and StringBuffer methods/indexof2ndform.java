import java.io.*;
import java.util.*;

/* 
Special form :indexOf("string",start_point);
Searching will start from Start_point
*/

class indexof2ndform
{
public static void main(String arr[])
{
PrintStream ps=new PrintStream(System.out);
String a="dav college, sector 10 ,Chandigarh,India";
int pos1=a.indexOf(",");
ps.println(pos1);
int pos2=a.indexOf(",",pos1+1);
ps.println(pos2);
int pos3=a.indexOf(",",pos2+1);
ps.println(pos3);
}
}
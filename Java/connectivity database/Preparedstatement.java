import java.sql.*;
import java.io.*;
import java.util.*;

class enterdata
{
public static void main(String arr[])
{
int rollno,per;
String name;
Scanner s=new Scanner(System.in);
System.out.println("Enter Student name:");
name=s.nextLine();
System.out.println("Enter Student rollno:");
rollno=s.nextInt();
System.out.println("Enter Student percentage:");
per=s.nextInt();

try
{
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/javap?autoReconnect=true&useSSL=false","root","root");
PreparedStatement st=con.prepareStatement("insert into student values(?,?,?)");
st.setString(1,name);
st.setInt(2,rollno);
st.setInt(3,per);
st.executeUpdate();
}
catch(Exception e)
{
System.out.println(e);
}
}
}

//run command = java -cp mysql-connector-java-5.1.48-bin.jar;. enterdata
// here 'connecting' is class name of java program
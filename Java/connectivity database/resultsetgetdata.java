import java.sql.*;
import java.io.*;
import java.util.*;

class resultsetdata
{
public static void main(String arr[])
{
try
{
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/javap?autoReconnect=true&useSSL=false","root","root");
Statement st=con.createStatement();
ResultSet rs=st.executeQuery("select * from student");
boolean result=rs.next();
while(result==true)
{
System.out.println(rs.getObject(1)+" "+rs.getObject(2)+" "+rs.getObject(3));
result=rs.next();
}
}
catch(Exception e)
{
System.out.println(e);
}
}
}

//run command = java -cp mysql-connector-java-5.1.48-bin.jar;. resultsetdata
// here 'connecting' is class name of java program
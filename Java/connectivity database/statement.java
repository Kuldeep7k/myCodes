import java.sql.*;
import java.io.*;

class connecting
{
public static void main(String arr[])
{
try
{
Class.forName("com.mysql.jdbc.Driver");
Connection c=DriverManager.getConnection("jdbc:mysql://localhost:3306/javap?autoReconnect=true&useSSL=false","root","root");
Statement s1=c.createStatement();
s1.executeUpdate("create table student(name varchar(20),rollno int,per int)");
System.out.println("Table Created");
}
catch(Exception e)
{
System.out.println(e);
}
}
}

//run command = java -cp mysql-connector-java-5.1.48-bin.jar;. connecting
// here 'connecting' is class name of java program
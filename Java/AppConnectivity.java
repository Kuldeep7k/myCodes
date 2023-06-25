// Run Command = java -cp mysql-connector-java-5.1.48-bin.jar;. AppConnectivity

import java.io.*;  
import java.lang.*;
import java.sql.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

class AppConnectivity implements ActionListener
{
Frame f;
Panel p;
Label l1,l2,l3;
Button b1,b2,b3;
TextField tf1,tf2,tf3;
JFrame j;

AppConnectivity()
{
f=new Frame();
p=new Panel();
j=new JFrame();

l1=new Label("Enter name ");
l2=new Label("Enter Rollno ");
l3=new Label("City");

tf1=new TextField(15);
tf2=new TextField(15);
tf3=new TextField(15);

b1=new Button("Insert");
b2=new Button("Delete");
b3=new Button("Clear");

f.add(p);

p.add(l1);
p.add(tf1);

p.add(l2);
p.add(tf2);

p.add(l3);
p.add(tf3);

p.add(b1);
p.add(b2);
p.add(b3);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{
try
{
Class.forName("com.mysql.jdbc.Driver");
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/javap?autoReconnect=true&useSSL=false","root","root");

if(ae.getSource()==b1)
{
String s1=tf1.getText();
String s2=tf2.getText();
String s3=tf3.getText();

PreparedStatement stat=con.prepareStatement("insert into app1 values (?,?,?)");
stat.setString(1,s1);
stat.setString(2,s2);
stat.setString(3,s3);

int i=stat.executeUpdate();
if(i==0)
{
JOptionPane.showMessageDialog(j,"insertion Faild");
}
else
{
JOptionPane.showMessageDialog(j,"insertion Done");
}
}
else if(ae.getSource()==b2)
{
String s2=tf2.getText();


PreparedStatement stat=con.prepareStatement("DELETE FROM app1 WHERE rollno=?");
stat.setString(1,s2);

int cd=stat.executeUpdate();
if(cd==0)
{
JOptionPane.showMessageDialog(j,"Deletion Faild");
}
else
{
JOptionPane.showMessageDialog(j,"Deletion Done");
}
}
else if(ae.getSource()==b3)
{
tf1.setText("");
tf2.setText("");
tf3.setText("");
}
}
catch(Exception e)
{
System.out.println(e);
}
}

public static void main(String arrr[])
{
AppConnectivity obj=new AppConnectivity();
}
}


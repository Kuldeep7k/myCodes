import java.awt.event.*;
import java.awt.*;

class interestcal implements ActionListener
{
Frame f;
Panel p;
Label l1,l2,l3,l4;
TextField tf1,tf2,tf3,tf4;
Button b1,b2;
GridLayout g;

interestcal()
{
f=new Frame();
p=new Panel();
f.add(p);
g=new GridLayout(5,2);
p.setLayout(g);

tf1=new TextField(15);
tf2=new TextField(15);
tf3=new TextField(15);
tf4=new TextField(15);

l1=new Label("Principle");
l2=new Label("Time");
l3=new Label("Rate");
l4=new Label("Interest");

p.add(l1);
p.add(tf1);
p.add(l2);
p.add(tf2);
p.add(l3);
p.add(tf3);
p.add(l4);
p.add(tf4);

b1=new Button("Interest");
b2=new Button("Clear");
p.add(b1);
p.add(b2);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this);
b2.addActionListener(this);

}

public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==b1)
{
String s1=tf1.getText();
String s2=tf2.getText();
String s3=tf3.getText();

int p=Integer.parseInt(s1);
int r=Integer.parseInt(s2);
int t=Integer.parseInt(s3);

int i=(p*r*t)/100;
String g=Integer.toString(i);
tf4.setText(g);

}
else if(ae.getSource()==b2)
{
tf1.setText("");
tf2.setText("");
tf3.setText("");
tf4.setText("");
}
}
public static void main(String arr[])
{
interestcal op=new interestcal();
}
}
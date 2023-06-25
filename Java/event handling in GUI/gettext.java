import java.awt.*;
import java.awt.event.*;

class gettext implements ActionListener
{
Frame f;
Panel p;
Label l;
TextField t;
Button b;

public gettext()
{
f=new Frame();
p=new Panel();
l=new Label("Enter Digit for find Cube :");
f.add(p);
t=new TextField(15);
p.add(l);
p.add(t);
b=new Button("Submit");
p.add(b);
f.setVisible(true);
f.setSize(1280,720);

b.addActionListener(this);
}

public void actionPerformed(ActionEvent ae)
{
String s=t.getText(); //getting text from textfield
if(s.length()==0)
{
p.setBackground(Color.red);
System.out.println("field cannot be left blank");
}
else
{

double x=Double.parseDouble(s); //datatype conversion string to double
double g=x*x*x;
System.out.println("Cude is : "+g);
p.setBackground(Color.white);
}
}
public static void main(String arr[])
{
gettext lol=new gettext();
}
}
import java.awt.*;
import java.awt.event.*;

class settext implements ActionListener
{
Frame f;
Panel p;
Label l1,l2;
TextField t1,t2;
Button b;

public settext()
{
f=new Frame();
p=new Panel();
l1=new Label("Enter Digit for find Cube :");
l2=new Label("Cube is :");
f.add(p);
t2=new TextField(15);
t1=new TextField(15);
p.add(l1);
p.add(t1);
p.add(l2);
p.add(t2);
b=new Button("Submit");
p.add(b);
f.setVisible(true);
f.setSize(1280,720);

b.addActionListener(this);
}

public void actionPerformed(ActionEvent ae)
{
String s=t1.getText(); //getting text from textfield
if(s.length()==0)
{
p.setBackground(Color.red);
System.out.println("field cannot be left blank");
}
else
{

double x=Double.parseDouble(s); //datatype conversion string to double
double g=x*x*x;
String s1=Double.toString(g); // now conversion back to string
t2.setText(s1); //Set text in a textfield only set by string datatype
p.setBackground(Color.white);
}
}
public static void main(String arr[])
{
settext lol=new settext();
}
}
import java.awt.*;
import java.awt.event.*;

class text implements ActionListener
{
Frame f;
Panel p;
TextField t;
Button b;

public text()
{
f=new Frame();
p=new Panel();
f.add(p);
t=new TextField(15);
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
System.out.println("Welcome : "+s);
p.setBackground(Color.white);
}
}
public static void main(String arr[])
{
text lol=new text();
}
}
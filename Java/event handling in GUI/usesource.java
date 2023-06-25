import java.awt.*;
import java.awt.event.*;

class usesource implements ActionListener
{
Frame f;
Panel p;
Button b1,b2,b3,b4,b5;

public usesource()
{
f=new Frame();
p=new Panel();
f.add(p);

b1=new Button("Red");
b2=new Button("Green");
b3=new Button("Pink");
b4=new Button("Yellow");
b5=new Button("Cyan");

p.add(b1);
p.add(b2);
p.add(b3);
p.add(b4);
p.add(b5);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
b5.addActionListener(this);

}

public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==b1)
p.setBackground(Color.red);

else if(ae.getSource()==b2)
p.setBackground(Color.green);

else if(ae.getSource()==b3)
p.setBackground(Color.pink);

else if(ae.getSource()==b4)
p.setBackground(Color.yellow);

else if(ae.getSource()==b5)
p.setBackground(Color.cyan);

}
public static void main(String arr[])
{
usesource L=new usesource();
}
}
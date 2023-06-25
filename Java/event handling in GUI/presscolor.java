import java.awt.*;
import java.awt.event.*;

class presscolor implements ActionListener
{
Frame f;
Panel p;
Button b1;

public presscolor()
{
f=new Frame();
p=new Panel();
b1=new Button("PRESS HERE") ;

f.add(p);
p.add(b1);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this); //control registered
}
public void actionPerformed(ActionEvent e)
{
p.setBackground(Color.red);
f.setTitle("Event Handling performed");
}
public static void main(String a[])
{
presscolor j=new presscolor();
}
}
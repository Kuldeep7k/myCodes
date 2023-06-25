import java.awt.event.*;
import java.awt.*;

class changecolor implements ActionListener
{
static int c=0; //this variable will be used for counting 
Frame f;
Panel p;
Button b1;
 
public changecolor()
{
f=new Frame();
p=new Panel();
f.add(p);

b1=new Button("Change Color ");
p.add(b1);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this);
}

public void actionPerformed (ActionEvent ae)
{
c=c+1;
if(c==1)
p.setBackground(Color.red);

else if(c==2)
p.setBackground(Color.green);

else if(c==3)
p.setBackground(Color.cyan);

if(c==4)
c=0;

}

public static void main(String a[])
{
changecolor n=new changecolor();
}
}
import java.awt.event.*;
import java.awt.*;

class effect implements ActionListener
{
Frame f;
Panel p;
MenuBar mb;
Menu m;
MenuItem m1;

public effect()
{
f=new Frame();
p=new Panel();
f.add(p);
mb=new MenuBar();
f.setMenuBar(mb);

m=new Menu("Color");
mb.add(m);

m1=new MenuItem("Change color of Panel");
m.add(m1);

f.setSize(1280,720);
f.setVisible(true);

m1.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{
p.setBackground(Color.blue);
}

public static void main(String arr[])
{
effect n=new effect();
}
}
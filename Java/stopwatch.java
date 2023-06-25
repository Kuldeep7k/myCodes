import java.io.*;
import java.awt.*;
import java.awt.event.*;

public class stopwatch implements ActionListener,Runnable
{
	Thread t;
Frame f;
Panel p;
Button b1,b2,b3;
TextField t1;
public stopwatch()
{
	t=new Thread();
f=new Frame("Stop Watch");
p=new Panel();
b1=new Button("Play");
b2=new Button("Stop");
b3=new Button("Reset");
t1=new TextField();
f.add(p);
p.add(t1);
p.add(b1);
p.add(b2);
p.add(b3);

f.setVisible(true);
f.setSize(1280,720);

b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
t.start();
}
public void run()
{
for(int i=1;i>=10; i++)
{
t1.setText(i);
try
{
t.sleep(1000);
}
catch(Exception e)
{}
}
}

public void actionPerformened (ActionEvent e)
{
if(e.getSource ==b1)
{
t.resume();
}
else if (e.getSouce ==b2)
{
t.suspend();
}
else if(e.getSource==b3)
{
t1.setText(" ");
}
}
}
class stopwatch1
{
public static void main(String arr[])
{
stopwatch ooo=new stopwatch();

}
}
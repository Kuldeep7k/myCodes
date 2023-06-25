import java.io.*;
import java.lang.*;
import java.awt.*;

class sleepgui1 extends Thread
{
Frame f;
Panel p;

public sleepgui1()
{
f=new Frame();
p=new Panel();
f.add(p);

f.setVisible(true);
f.setSize(1280,720);

start();
}
public void run()
{
try
{
p.setBackground(Color.red);
sleep(2000);
p.setBackground(Color.pink);
sleep(2000);
p.setBackground(Color.green);
sleep(2000);
p.setBackground(Color.cyan);
sleep(2000);
p.setBackground(Color.black);
sleep(2000);
p.setBackground(Color.white);
sleep(2000);
p.setBackground(Color.orange);
sleep(2000);
p.setBackground(Color.yellow);
}
catch(Exception e){}
}
}

class sleepgui
{
public static void main(String arr[])
{
sleepgui1 oo=new sleepgui1();
}
}

import java.awt.*;
class test
{
Frame f;
Panel p;
Label l1,l2,l3;
Button b1,b2;
TextField tf1,tf2;
Choice c1;
test()
{
f=new Frame();
p=new Panel();
l1=new Label("Name");
l2=new Label("Roll no");
l3=new Label("City");
tf1=new TextField(15);
tf2=new TextField(15);
c1=new Choice();
c1.add("Delhi");
c1.add("Bombay");
c1.add("Chandigarh");
c1.add("Mumbai");
b1=new Button("Login");
b2=new Button("Clear");

f.add(p);
p.add(l1);
p.add(tf1);
p.add(l2);
p.add(tf2);
p.add(l3);
p.add(c1);
p.add(b1);
p.add(b2);

f.setVisible(true);
f.setSize(1280,720);
f.setResizable(false);

p.setBackground(Color.yellow);
b1.setBackground(Color.blue);
l1.setBackground(Color.yellow);
l2.setBackground(Color.yellow);
l3.setBackground(Color.yellow);

tf1.setBackground(Color.cyan);
tf2.setBackground(Color.magenta);


}

public static void main(String a[])
{
test obj=new test();
}
}
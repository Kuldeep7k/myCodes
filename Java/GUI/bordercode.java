import java.awt.*;

class bordercode
{
Frame f;
Panel p;
Panel p1,p2,p3,p4,p5; //borderLayout will be applied on this panel

BorderLayout b1;

bordercode()
{
f=new Frame();
p=new Panel();
f.add(p);
b1=new BorderLayout();
p.setLayout(b1); //now panel p will be divided into 5 regions

p1=new Panel();
p1.setBackground(Color.red);

p2=new Panel();
p2.setBackground(Color.pink);

p3=new Panel();
p3.setBackground(Color.blue);

p4=new Panel();
p4.setBackground(Color.yellow);

p5=new Panel();
p5.setBackground(Color.green);

p.add(p1,"North");
p.add(p2,"South");
p.add(p3,"Center");
p.add(p4,"West");
p.add(p5,"East");

f.setVisible(true);
f.setSize(1280,720);

}
public static void main(String a[])
{
bordercode j=new bordercode();
} 
}
import java.awt.*;

class flowcode
{
Frame f;
Panel p;
Button b1,b2,b3,b4,b5;
FlowLayout f1;

flowcode()
{
f=new Frame();
p=new Panel();
f.add(p);
f1=new FlowLayout();
p.setLayout(f1);

b1=new Button("one");
b2=new Button("two");
b3=new Button("three");
b4=new Button("four");
b5=new Button("five");

p.add(b1);
p.add(b2);
p.add(b3);
p.add(b4);
p.add(b5);

f.setVisible(true);
f.setSize(1280,720);

}
public static void main(String a[])
{
flowcode j=new flowcode();
} 
}
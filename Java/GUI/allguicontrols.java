import java.awt.*;
class test2
{
Frame f;
Panel p;
Label l1,l2,l3;
Button b1,b2;
TextField tf1,tf2;
Choice c1;
List l;
CheckboxGroup cg;
Checkbox cb1,cb2,cb3,cb4,cb5;
TextArea t;

test2()
{
f=new Frame("simpleGui");
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
b1=new Button("Submit");
b2=new Button("Clear");
l=new List(3,true);//here 3 is number of list item display 
l.add("java");
l.add("C");
l.add("C++");
l.add("VB.NEt");
cg=new CheckboxGroup();
cb1=new Checkbox("BBA",cg,false);
cb2=new Checkbox("BCA",cg,true);
cb3=new Checkbox("BCOM",cg,false);
cb4=new Checkbox("BA",cg,false);
cb5=new Checkbox("BSc",cg,false);
t=new TextArea("Type your address here",10,20);

f.add(p);
p.add(l1);
p.add(tf1);
p.add(l2);
p.add(tf2);
p.add(l3);
p.add(c1);
p.add(l);
p.add(cb1);
p.add(cb2);
p.add(cb3);
p.add(cb4);
p.add(cb5);
p.add(t);

p.add(b1);
p.add(b2);

f.setVisible(true); 
f.setSize(1280,720);


}

public static void main(String a[])
{
test2 obj=new test2();
}
}
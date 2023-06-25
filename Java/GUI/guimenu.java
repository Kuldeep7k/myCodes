import java.awt.*;
class guimenu
{
Frame f;
Panel p;
Label l1;
Button b1;
MenuBar mb;
Menu m1,m2,m3,m4,m5;
MenuItem mt1,mt2,mt3;
//now sub menu ref variables
Menu sub;
MenuItem smt1,smt2,smt3;


guimenu()
{
f=new Frame();
p=new Panel();
mb=new MenuBar();
f.setMenuBar(mb);//menu bar added on the Frame Window
m1=new Menu("File");
m2=new Menu("Edit");
m3=new Menu("Format");
m4=new Menu("View");
m5=new Menu("Help");

mb.add(m1);
mb.add(m2);
mb.add(m3);
mb.add(m4);
mb.add(m5);

mt1=new MenuItem("New");
mt2=new MenuItem("Open");
mt3=new MenuItem("Save");

m1.add(mt1);
m1.add(mt2);
m1.add(mt3); //menu items added in a menu

//now creating sub menu
sub=new Menu("Color");
smt1=new MenuItem("Red");
smt2=new MenuItem("Blue");
smt3=new MenuItem("Green");
sub.add(smt1);
sub.add(smt2);
sub.add(smt3);

m1.add(sub);


l1=new Label("Name");
b1=new Button("Submit");


f.add(p);
p.add(l1);

p.add(b1);


f.setVisible(true); 
f.setSize(1280,720);


}

public static void main(String a[])
{
guimenu obj=new guimenu();
}
}
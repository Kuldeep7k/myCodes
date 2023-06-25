import java.awt.*;
class guifont
{
Frame f;
Panel p;
Label l1;
Button b1;
Font ft;

guifont()
{
f=new Frame();
p=new Panel();
l1=new Label("Name");
ft=new Font("Goudy Stout",3,200); //here 0 is normal and 1 is bold and 2 italic and 3 is bold and italic

b1=new Button("Submit");


f.add(p);
p.add(l1);
l1.setFont(ft);



p.add(b1);


f.setVisible(true); 
f.setSize(1280,720);


}

public static void main(String a[])
{
guifont obj=new guifont();
}
}
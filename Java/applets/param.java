import java.awt.*;
import java.applet.*;

public class param extends Applet
{
String str;
public void init()
{
str=getParameter("String");
if(str==null)
{
str="Java";
}
str="Hello"+str;
}
public void paint(Graphics g)
{
g.drawString(str,100,100);
}
}

//
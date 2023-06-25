import java.awt.*;
import java.applet.*;

public class shapes extends Applet
{
public void paint(Graphics g)
{
g.drawLine(10,10,50,50);
g.drawLine(10,60,40,30);
g.fillRect(90,10,30,80);
g.drawOval(100,170,200,120);
g.fillOval(101,90,200,120);

g.fillArc(200,40,80,40,180,180);

}
}
//
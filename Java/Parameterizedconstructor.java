import java.io.*;
import java.lang.*;
import java.util.*;

class ncc
{
int fund;
int dietfund;
PrintStream ps=new PrintStream(System.out);

ncc()
{
fund=1000;
dietfund=3000;
}

ncc(int x)
{
if(x==1)
{
ps.println("\nWelcome to Group 1");
fund=2000;
dietfund=4000;
}

else if(x==2)
{
ps.println("\nWelcome to Group 2");
fund=3000;
dietfund=5000;
}

else if(x==3)
{
ps.println("\nWelcome to Group 3");
fund=4000;
dietfund=6000;
}
}
void dis()
{
ps.println("Group  travelFund:"+fund);
ps.println("Group  DietFund:"+dietfund);
}

public static void main(String a[])
{
ncc obj1=new ncc();
obj1.dis();
ncc obj2=new ncc(1);
obj2.dis();

ncc obj3=new ncc(3);
obj3.dis();

ncc obj4=new ncc(2);
obj4.dis();
}

}

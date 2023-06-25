import java.io.*;
import java.lang.*;
import java.util.*;

class two extends one
{
void dis()
{
ps.println("Name is :"+name);
ps.println("Roll no is :"+roll);
}

public static void main(String ar[])
{
two obj1=new two();
two obj2=new two();
obj1.get();
obj1.dis();

obj2.get();
obj2.dis();

}
}
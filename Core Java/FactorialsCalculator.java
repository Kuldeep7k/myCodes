package factorials;
import java.util.Scanner;
public class Factorials {
    public static void main(String[] args) {
        System.err.println("factorials");
      Scanner c=new Scanner(System.in);
        int i=1;
        int f=1;
        int z;
        System.out.print("enter a number  ");
        z=c.nextInt();
        System.err.println("---------------------------------------");
        do
        {
            f*=i;
            System.out.println(i+"!="+f);
            i=i+1;
        }
        while(i<=z);
        System.err.println("---------------------------------------");
    }
    
}

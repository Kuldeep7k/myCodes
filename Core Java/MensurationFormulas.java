
package mensuration.formulas;
import java.util.Scanner;

public class MensurationFormulas {

    public static void main(String[] args) {
                    
        
        
    {
           
        Scanner R=new Scanner(System.in);
        
        System.out.println("ENTER CHOICE :");
        System.out.println("1.Area of triangle");   
        System.out.println("2.Area of square ");
        System.out.println("3.Area of rectangle");
        System.out.println("4.Area of circle");
        System.out.println("5.Area of cone");
        System.out.println("ENTER NUMBER : ");
  
        int i=R.nextInt();
           
        System.out.println("ENTER A");
        int a=R.nextInt();
           
        System.out.println("ENTER B");
        int b=R.nextInt();
           
        double result=0;
           
        switch(i)
        {
                 
            case 1:
                result=1/2*a*b;
                break;
            case 2:
                result=a*b;
                break;
            case 3:
                result=2*(a+b);
                break;
            case 4:
             result=3.14*a*a;
            
            default:
                System.out.println("WRONG NUMBER");
            
        }
           
        System.out.println("RESULT = "+result);
    }
}
    }
    


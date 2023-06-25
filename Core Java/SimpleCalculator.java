
package calculator1;

import java.util.Scanner;

public class Calculator1 {

 
    public static void main(String[] args) {
 Scanner sc=new Scanner(System.in);
        
         System.out.println("1.Addition");
         System.out.println("2.Subtraction");
         System.out.println("3.Multiplication");
         System.out.println("4.Division");
         System.out.println("Enter choice");
         int i=sc.nextInt();
         System.out.println("Enter first number");
         int a=sc.nextInt ();
         
         System.out.println("Enter second Number ");
         int b=sc.nextInt ();
         
         double result = 0;
  
         switch (i) {
            case 1:
           result =a+b;
                break;
                
            case 2:
                result=a-b;
                break;
                
            case 3:
                result=a*b;
                break;
                
            case 4:
                if (b==0)
                {  System.out.println("Division not possible ");
                break;
                
                }   
                else 
                result=a/b;
                break;
              
            default:
                System.out.println("Wrong number");
                
           
        }
            
         System.out.println("Result="+result);
                
                  
    }
    
}

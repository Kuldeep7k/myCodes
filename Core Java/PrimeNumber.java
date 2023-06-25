
package prime.number;

import java.util.Scanner;
public class PrimeNumber {


    public static void main(String[] args) {
        
        int num,i,count=0;
        Scanner scan= new Scanner(System.in);
        System.out.println("Enter a number;");
        num = scan.nextInt();
        
        for(i=2; i<num;i++)
        {
        if(num%i == 0)
        {
        
        count++;
        break;
        
        }
        }
       if(count==0)
       {
           System.out.println("This is a prime numbers");
           
       }
       else{
           System.out.println("This is not a prime number");
       }
       
    }
    
}

import java.util.Scanner;
public class Palindrome{	
      public static void main(String args[]){
          Scanner sc=new Scanner(System.in);
          System.out.println("enter a number");
          int num =sc.nextInt();        
          int n = num; //used at last time check
          int reverse=0,remainder;
          while(num > 0){
                remainder = num % 10;
                reverse = reverse * 10 + remainder;
                num = num / 10;
           }
          if(reverse == n)
              System.out.println(n+" is a Palindrome Number");
          else
              System.out.println(n+" is not a Palindrome Number");
     }
}

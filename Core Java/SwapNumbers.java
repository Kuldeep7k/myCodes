import java.util.Scanner;

class Swap{
      public static void main(String args[]){
      Scanner sc=new Scanner(System.in);
      System.out.println("enter a number");
      int num1=sc.nextInt();
      System.out.println("enter a another number");
      int num2=sc.nextInt();
      System.err.println("\n***Before Swapping***");
      System.out.println("Number 1 : "+num1);
      System.out.println("Number 2 : "+num2);
      //Swap logic
      num1 = num1 + num2;
      num2 = num1 - num2;
      num1 = num1 - num2;
      System.err.println("\n***After Swapping***");
      System.out.println("Number 1 : "+num1);
      System.out.println("Number 2 : "+num2);
      }
}
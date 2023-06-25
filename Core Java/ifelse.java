import java.util.Scanner;

class GradeResultChecker
{
      public static void main(String args[]){
       System.out.println("ENTER A NUMBER  ");
          Scanner c=new Scanner(System.in);
          int marks = c.nextInt();       
        if (marks>=90 && marks<=100){
                     System.out.println("Excellent");
                     }
        else if(marks>=80 && marks<90){
                     System.out.println("Very Good");
                     }
        else if(marks>=60 && marks<80){	
                     System.out.println("Good");
                    }
        else if(marks>=33 && marks<60){	
                     System.out.println("Work Hard");
                    }
        else{
                     System.out.println("fail");
                     }
        
        System.out.println("Enter a number if you want to see yout result again");
        marks=c.nextInt();
        if (marks>=90 && marks<=100){
                     System.out.println("Excellent");
                     }
        else if(marks>=80 && marks<90){
                     System.out.println("Very Good");
                     }
        else if(marks>=60 && marks<80){	
                     System.out.println("Good");
                    }
        else if(marks>=33 && marks<60){	
                     System.out.println("Work Hard");
                    }
         else{
                     System.out.println("fail");
                     }

 }
}

package salarybonus;
import com.sun.swing.internal.plaf.basic.resources.basic;
import java.util.Scanner;

public class SalaryBonus {
   
    public static void main(String[] args) {
        int basic_salary, total_salary;
        int bonus;
        Scanner dc = new Scanner(System.in);
        System.out.println("Enter Basic Salary");
         basic_salary = dc.nextInt();
        if (basic_salary<=20000)
          
            
        {
           bonus = basic_salary*5/100;
            System.out.println(bonus);
        }
        else{
       bonus=basic_salary*10/100;
            System.out.println(bonus);
        
        }


        
    }
    
}

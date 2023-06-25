
package fahrenheittocelsius;

import java.util.Scanner;
public class Fahrenheittocelsius {


    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        double celsius, fahrenheit;
        System.out.println("Enter a temperature in fahrenheit:");
        fahrenheit = sc.nextDouble();
        celsius = (fahrenheit-32)*5/9;
        System.out.println(fahrenheit+"*F="+celsius+"*C");
    }

    }
    


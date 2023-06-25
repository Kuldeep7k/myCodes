import java.util.Scanner;

class DigitsOpr {
    private int num;

    // Function to get value of num
    public void getNum(int x) {
        num = x;
    }

    // Function to calculate sum of all digits
    public int sumDigits() {
        int n, sum;
        n = num; // Keep value of num safe
        sum = 0;
        while (n > 0) {
            sum += (n % 10); // Find digit using n=n%10
            n /= 10;
        }
        return sum;
    }

    // Function to calculate product of all digits
    public int productDigits() {
        int n, pro;
        n = num; // Keep value of num safe
        pro = 1;
        while (n > 0) {
            pro *= (n % 10); // Find digit using n=n%10
            n /= 10;
        }
        return pro;
    }
}

public class number1 {
    public static void main(String[] s) {
        DigitsOpr dig = new DigitsOpr();
        int n;

        Scanner sc = new Scanner(System.in);

        // Read number
        System.out.print("Enter a positive integer number: ");
        n = sc.nextInt();

        dig.getNum(n);
        System.out.println("SUM of all digits: " + dig.sumDigits());
        System.out.println("PRODUCT of all digits: " + dig.productDigits());
    }
}

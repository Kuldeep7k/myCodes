import java.util.Arrays;
import java.util.Scanner;

public class Array15 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number:");
        int[] num = new int[5];
        for (int i = 0; i < num.length; i++) {
            num[i] = sc.nextInt();
        }
        Arrays.sort(num);
        System.out.println("Arrays after sorting");
        for (int j = 0; j < num.length; j++) {
            System.out.println(num[j]);
        }
    }
}

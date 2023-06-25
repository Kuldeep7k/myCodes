package student;
import java.util.Scanner;
import java.util.Arrays;

public class Student2_19 {
    static int rollno;
    static int Marks[] = new int[3];
    static int totalmarks;
    
    public static void getMarks() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks in three subjects");
        Marks[0] = sc.nextInt();
        Marks[1] = sc.nextInt();
        Marks[2] = sc.nextInt();
    }
    
    public static void finalTotal() {
        totalmarks = Marks[0] + Marks[1] + Marks[2];
        System.out.println(totalmarks);
    }
    
    class objectArray {}
    
    public static void main(String[] args) {
        Student2_19 sc = new Student2_19();
        Student2_19.getMarks();
        Student2_19.finalTotal();
    }
}

package student;
import java.util.Scanner;

public class Student_19 {
    int rollno;
    int Marks[] = new int[3];
    int totalmarks;
    
    void getMarks() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks in three subjects");
        Marks[0] = sc.nextInt();
        Marks[1] = sc.nextInt();
        Marks[2] = sc.nextInt();
    }
    
    void finalTotal() {
        totalmarks = Marks[0] + Marks[1] + Marks[2];
        System.out.println(totalmarks);
    }
    
    public static void main(String[] args) {
        Student_19 sc = new Student_19();
        sc.getMarks();
        sc.finalTotal();
    }
}

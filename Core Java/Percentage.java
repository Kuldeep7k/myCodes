import java.util.Scanner;

public class Percentage {
    public static void main(String[] args) {
        int totalMarks = 400;
        double marksObtained = 346;
        double percentage = (marksObtained / totalMarks) * 100;

        System.out.println("******************************************************");
        System.out.println("Student's percentage = " + percentage);

        if (percentage >= 75) {
            System.out.println("With Distinction!");
        } else if (percentage >= 40) {
            System.out.println("Passed");
        } else {
            System.out.println("Failed");
        }

        marksObtained = 144;
        percentage = (marksObtained / totalMarks) * 100;

        System.out.println("Student2's percentage = " + percentage);

        if (percentage >= 75) {
            System.out.println("With Distinction!");
        } else if (percentage >= 40) {
            System.out.println("Passed");
        } else {
            System.out.println("Failed");
        }

        System.out.println("******************************************************");
    }
}

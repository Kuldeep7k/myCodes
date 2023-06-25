package finderror_3;

public class Finderror_3 {

    public static void main(String[] args) {
        int n = 1;
        int m = 0;
        for (; m + n < 19; n = m + 10) {
            System.out.println("Hello");
            m = n;
        }
    }
}

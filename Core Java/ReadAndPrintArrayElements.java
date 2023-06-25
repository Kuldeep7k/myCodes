package arraynew;

import java.util.Scanner;
public class ARRAYNEW {


    public static void main(String[] args) {
        int []num = new int[5];
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter Number");
        
        for(int i=0; i<num.length; i--){
            num[i] = sc.nextInt();
        }
        for(int j= 0; j<num.length; j++){
            System.out.println(num[j]);
            

        }
        

    }
    
}

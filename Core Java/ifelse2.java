package result;



public class Result {


    
    public static void main(String[] args) {
        int n=90;
        if(n>=91)
            System.out.println("Student is pass by A grade");
        
        else if(n>=81&&n<=90)
            System.out.println("Student is pass by B grade");
        
        else if(n>=61&&n<=80)
            System.out.println("Student is pass by C grade");
        
        else if(n>=34&&n<=60)
            System.out.println("Student is pass by D grade");
        
        else 
            System.out.println("Student is fail!");
        
 
    }
    
}

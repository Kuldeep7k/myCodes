public class abc {

 
    public static void main(String[] args) {
       int[] num=new int[10];
       
       for (int i=0; i<num.length; i++)
           num [i]=i;
       int sum=0;
       for (int i=0; i<num.length; i++)
          sum+=num[i];
        System.out.println("sum="+sum);
                  
    }
    
}

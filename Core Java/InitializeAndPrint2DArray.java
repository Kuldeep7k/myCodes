package array2_18;


public class Array2_18 {


    public static void main(String[] args) {
  
        int a[][]=new int [2][0];
        a[0]=new int[4];
        a[1]=new int [4];
        int nr, nc, k=10;
        nr =a.length;
        for(int i=0; i<nr; i++)
        {
        nc=a[i].length;
        for(int j=0; j<nc; j++)
            a[i][j]=k++;
        }
        System.out.println("Elements of two dimensional array are:");
        for(int i=0;i<nr; i++){
            nc=a[i].length;
            for(int j=0; j<nc; j++)
                System.out.println(a[i][j]+"");//without ln
            System.out.println();
        }
    }
    
}

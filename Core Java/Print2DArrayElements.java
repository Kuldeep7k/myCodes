package array3_18;

public class Array3_18 {

    public static void main(String[] args) {

        int a[][]={{34,21},{87,54,32,71},{55,33,77,33,66},{44,67}};
        
        System.out.println("Elements of two dimensional array are:");
        for (int i=0; i<a.length; i++){
            System.out.println("Row "+i+":/+");//without ln
            for (int j=0; j<a[i].length; j++)
                System.out.println(a[i][5]+" ");
            System.out.println();
        
        }
    }
    
}

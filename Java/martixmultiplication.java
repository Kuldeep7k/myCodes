import java.util.Scanner;
 
class MatrixMulti
{
  public static void main(String gg[])
  {
    int m,n,p,q,a,b,k,sum=0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter the number of rows and columns of first matrix");
    m=s.nextInt();
    n=s.nextInt();
    int x[][] = new int[m][n];
    System.out.println("Enter elements of first matrix");
    for (a = 0; a < m; a++)
      for (b = 0; b < n; b++)
        x[a][b] = s.nextInt();
 
    System.out.println("Enter the number of rows and columns of second matrix");
    p = s.nextInt();
    q = s.nextInt();
 
    if (n != p)
    {
    System.out.println("The matrices can't be multiplied with each other.");
    }
    else
    {
      int y[][] = new int[p][q];
      int multiply[][] = new int[m][q];
 
      System.out.println("Enter elements of second matrix");
 
      for (a = 0; a < p; a++)
        for (b = 0; b < q; b++)   
      y[a][b] = s.nextInt();
       for (a = 0; a < m; a++) {
       for (b = 0; b < q; b++) {
          for (k = 0; k < p; k++)
            sum = sum + x[a][k]*y[k][b];
          multiply[a][b] = sum;
          sum = 0;
        }
}
      System.out.println("Product of the matrices:");
      for (a = 0; a < m; a++) {
        for (b = 0; b < q; b++)
          System.out.print(multiply[a][b]+"\t"); 
        System.out.print("\n");
      }
 }}}
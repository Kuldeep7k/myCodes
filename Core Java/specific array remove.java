import java.util.ArrayList;
 
public class ExArrayList {
 
  public static void main(String[] args) {
    ////Creating object of ArrayList
    ArrayList arrList = new ArrayList();
   
    //adding data to the list
    arrList.add("100");
    arrList.add("200");
    arrList.add("300");
    arrList.add("400");
    arrList.add("500");
   
    System.out.println("Array List elements: ");
    //display elements of ArrayList
    for(int iLoop=0; iLoop < arrList.size(); iLoop++)
      System.out.println(arrList.get(iLoop));
   
    //removing some of the elements
    //removing two elements from index 1 and 3
    arrList.remove(1);
    arrList.remove(3);
    
    
    System.out.println("Array List elements: ");
    //display elements of ArrayList after removing 
    for(int iLoop=0; iLoop < arrList.size(); iLoop++)
      System.out.println(arrList.get(iLoop));
  
  }
}
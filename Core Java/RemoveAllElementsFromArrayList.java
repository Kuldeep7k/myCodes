import java.util.ArrayList;

public class RemoveAllElements{
	public static void main(String []args){
		//ArrayList object
		ArrayList arrList = new ArrayList();

		//Add elements to Arraylist
		arrList.add("100");
		arrList.add("200");
		arrList.add("300");
		arrList.add("400");
		arrList.add("500");

		System.out.println("Total number of elements in ArrayList: "
			+ arrList.size());
		//remove all elements using clear() method
		arrList.clear();
		System.out.println("Total number of elements in ArrayList: "
			+ arrList.size());
	}
}
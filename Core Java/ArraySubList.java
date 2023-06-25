import java.util.ArrayList;
import java.util.List;

public class subListExample{
	public static void main(String []args){
		//ArrayList object
		ArrayList arrList = new ArrayList();

		//adding elements 
		arrList.add("100");
		arrList.add("200");
		arrList.add("300");
		arrList.add("400");
		arrList.add("500");

		//adding elements in List using 
		//subList method
		List oList = arrList.subList(1,3);

		//displaying elements of sub list
		System.out.println("Elements of sub list: ");
		for(int i=0; i< oList.size() ; i++)
			System.out.println(oList.get(i));
	}
}
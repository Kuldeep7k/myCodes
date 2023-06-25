import java.util.ArrayList;

public class ExArrayReplace 
{	 
	public static void main(String[] args) 
	{
		// Create an object of arrayList. 
		ArrayList arrayList = new ArrayList();

		//Add elements to arraylist.

		arrayList.add("55");
		arrayList.add("25");
		arrayList.add("368");

		System.out.println("Original ArrayList...");

		for(int index=0; index < arrayList.size(); index++)
			System.out.println(arrayList.get(index));

		// Enter the position and number for replace.
		arrayList.set(1,"6");

		// Print arraylist after replacement.
		System.out.println("ArrayList after replacement...");
			for(int index=0; index < arrayList.size(); index++)

		System.out.println(arrayList.get(index));
	}
}
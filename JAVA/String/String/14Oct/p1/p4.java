/* 
 * String ComapareTo() method:
 * 	compareTo() method compares two string 
 *
 * Case 4:
 * 	When two strings are having different length ad different characters
 * 	e.g Core2Web and Hello
 *  	
 *  	Here length is different and character is also different . Always first preference is for character checking 
 *  	= C - H
 *  	= 67 - 73 = -5 
 * 	
 */

class CompareToDemo {
	public static void main(String[] args) {
		//create two string objects 
		String s1 = "Core2Web";
		String s2 = new String("Hello");
		
		System.out.println("CompareTo demo : ");
		System.out.println("Case 4: When two strings are differ by length and characters are also different");
		System.out.println("s1 = "+ s1);
		System.out.println("s2 = "+ s2);

		System.out.println("s1.compareTo(s2) = "+ s1.compareTo(s2));		//it will print -5
	

	}

}

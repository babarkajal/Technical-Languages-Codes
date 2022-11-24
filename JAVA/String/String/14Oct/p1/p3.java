/* 
 * String ComapareTo() method:
 * 	compareTo() method compares two string 
 *
 * Case 3:
 * 	When two strings are having different length but  one is substring of second
 * 	e.g Core2Web and Core
 *  	Here Core is substring of Core2Web
 *  	therefore difference will be difference in length
 *  	= 8 - 4 = 4
 * 	
 */

class CompareToDemo {
	public static void main(String[] args) {
		//create two string objects 
		String s1 = "Core2Web";
		String s2 = "Core";
		
		System.out.println("CompareTo demo : ");
		System.out.println("Case 3: When two strings are differ by length and one is substring of second");
		System.out.println("s1 = "+ s1);
		System.out.println("s2 = "+ s2);

		System.out.println("s1.compareTo(s2) = "+ s1.compareTo(s2));		//it will print 4
	

	}

}

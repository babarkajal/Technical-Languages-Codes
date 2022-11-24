/* 
 * String ComapareTo() method:
 * 	compareTo() method compares two string 
 *
 * Case 2:
 * 	When two strings are having same length but different characters
 * 	e.g KAJAL and kajal
 * 	here lenth is same so it will go for character checking so first characters of each string K and k 
 * 	= K-k = -32
 */

class CompareToDemo {
	public static void main(String[] args) {
		//create two string objects 
		String s1 = "KAJAL";
		String s2 = "Kajal";
		
		System.out.println("CompareTo demo : ");
		System.out.println("Case 2: When two strings are same by length and differ by characters");
		System.out.println("s1 = "+ s1);
		System.out.println("s2 = "+s2);

		System.out.println("s1.compareTo(s2) = "+ s1.compareTo(s2));		//it will print -32
	

	}

}

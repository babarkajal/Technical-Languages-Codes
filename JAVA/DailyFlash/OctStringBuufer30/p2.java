//bbB

/* 
 * write a stringbuffer to use methods chatAt(int) and fnd the index() 
 */


class Program {
	public static void main(String[] args) {
		
		//create oBject using StringBuffer 
		StringBuffer s1 = new StringBuffer("Core2web");
		
		//find the character at position 5
		/* chatAt() function 
		 * 	returns the character at given position
		 * 	if the given position is not present then it 
		 * 	returns StringIndexOutOfBound  	 		 
		 */ 	
		System.out.println("Char at 5 index "+ s1.charAt(8));
	/* indexOf gives the index of the substring in the given string
	 */ 
	System.out.println("Index of w in string " + s1 + " is "+s1.indexOf("w"));	
	
	}

}

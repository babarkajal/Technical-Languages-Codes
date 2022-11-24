//bbB

/* 
 * write a stringbuffer to use methods chatAt(int) and fnd the index() 
 */

class Program {
	public static void main(String[] args) {
		
		StringBuffer s1 = new StringBuffer("Healthy");
		
		System.out.println(s1);
		//add space at index 4
		s1.insert(4,' ');

		System.out.println("After inserting space: "+s1);

		//insert at 8th index 'self'
		s1.insert(8,"self");
		System.out.println("After inserting self: "+s1);

		//delete fourth character 
		s1.deleteCharAt(4);
		System.out.println("After deleting space: "+s1);

	}
}



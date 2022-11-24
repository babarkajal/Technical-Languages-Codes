//bbB

/* 
 * take a stringbuffer object and append one string to the other
 * str1 - good 
 * str2 - life
 */

class Program {
	public static void main(String[] args) {
		
		//create two oBjects using StringBuffer 
		StringBuffer s11 = new StringBuffer("Good");
		StringBuffer s12 = new StringBuffer("Life");
		
		System.out.println("before append operations string are");
		System.out.println(s11);
		System.out.println(s12);
		s11.append(s12);

		System.out.println("after appended operation");
		System.out.println(s11);
		System.out.println(s12);
		
	
	}

}

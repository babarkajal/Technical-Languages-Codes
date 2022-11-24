/* p2.java
 *
 * charAt(int) method 
 * 	it gives character at the given index
 */	

class StringBufferDemo {

	public static void main(String args[]) {
		StringBuffer s1 = new StringBuffer("Kajal");
		System.out.println(s1.charAt(4));
		/*
		System.out.println(s1.charAt(10));	//exception
		System.out.println(s1.charAt(-1));	//exception
		*/
	}
}

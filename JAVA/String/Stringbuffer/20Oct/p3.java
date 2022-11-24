/* p2.java
 *
 * append() method 
 */	

class StringBufferDemo {

	public static void main(String args[]) {
		StringBuffer s1 = new StringBuffer("Kajal");
		System.out.println("String is "+ s1);
		s1.append("babar");
		/* this is different than the string 
		 * string is immutable and stringbuffer is mutable we can change the existing object
		 */
		System.out.println("appended String is "+ s1);
	}
}

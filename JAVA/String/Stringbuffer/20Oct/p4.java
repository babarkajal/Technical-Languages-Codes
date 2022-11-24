/* 
 * p4.java
 * insert() method
 * 	insert method will insert given string ,char at the given index
 */

class IndexDemo {
	public static void main(String[ ]  args) {
		StringBuffer s1 = new StringBuffer("Kajal");
		System.out.println("String is "+ s1);
		s1.insert(4,"babar");
		/* this is different than the string 
		 * string is immutable and stringbuffer is mutable we can change the existing object
		 */
		System.out.println("appended String is "+ s1);
	}
}
	



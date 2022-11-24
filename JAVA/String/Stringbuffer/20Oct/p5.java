/* 
 * p4.java
 * deleteChatAt() method
 * 	deletes the char at given index 
 */

class deleteDemo {
	public static void main(String[ ]  args) {
		StringBuffer s1 = new StringBuffer("Kajal");
		System.out.println("String is "+ s1);
		s1.deleteCharAt(4);
		/* this is different than the string 
		 * string is immutable and stringbuffer is mutable we can change the existing object
		 */
		System.out.println("after deleting char at 4 String is "+ s1);
	}
}
	



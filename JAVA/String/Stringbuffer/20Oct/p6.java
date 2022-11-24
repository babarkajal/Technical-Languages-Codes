/* 
 * delete() method
 * 	deletes the string 
 */

class deleteDemo {
	public static void main(String[ ]  args) {
		StringBuffer s1 = new StringBuffer("Kajal");
		System.out.println("String is "+ s1);
		s1.delete(0,3);
		/* deletes the character starting from 0 to 2
		 * means string will be al
		 */
		System.out.println("after deleting the string: "+ s1);	//al
	}
}
	



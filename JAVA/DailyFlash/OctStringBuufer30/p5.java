/*
 * write a program to delete substring usifn StringBuffer
 */

class Program {
	public static void main(String[] args) {
		StringBuffer s = new StringBuffer("Aquaman");
		
		System.out.println("String before delete operation: "+ s);
		//delete a substring from given string 
		s.delete(3,6);
		System.out.println("String after delete operation: "+ s);


	}

}

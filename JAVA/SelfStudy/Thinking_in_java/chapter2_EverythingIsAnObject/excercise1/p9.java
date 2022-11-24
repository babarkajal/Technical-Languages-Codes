/*
 * Exercise 9: (2) Write a program that demonstrates that autoboxing works for all the
primitive types and their wrappers.
*/

class Program {
	public static void main(String args[]) {
		Integer  ch= new Integer('K');
		System.out.println("Wrapper c= "+ch);

		int c = ch;
		System.out.println("c= "+c);



	}

}

/*
Exercise 8: (3) Write a program that demonstrates that, no matter how many objects
you create of a particular class, there is only one instance of a particular static field in that
class.
*/

class Program {
	static int i =47;

	public static void main(String args[]) {
		Program p1 = new Program();
		Program p2 = new Program();
		System.out.println("p1 i= "+ p1.i);
		System.out.println("p2 i= "+ p2.i);
		//i is incremented through obj  p1
		p1.i++;
		System.out.println("After increment ");
		System.out.println("p1 i= "+ p1.i);
		System.out.println("p2 i= "+ p2.i);
}

}

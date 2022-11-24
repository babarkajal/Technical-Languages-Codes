/*
Exercise 7: (1) Turn the Incrementable code fragments into a working program.
*/

class Program {
	static int i =47;

	public static void main(String args[]) {
		Program p = new Program();
		System.out.println("Static i= "+ p.i);
		System.out.println("Static(using class name) i= "+ Program.i);
		Program.i++;
		System.out.println("Static(using class name) incremented i= "+ Program.i);
}

}

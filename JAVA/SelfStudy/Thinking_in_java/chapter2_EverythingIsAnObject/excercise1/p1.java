/*Exercise 1: (2) Create a class containing an int and a char that are not initialized, and
print their values to verify that Java performs default initialization.
*/

class Program {
	int i;
	char c;
	public static void main(String args[]) {
		Program p = new Program();
		System.out.println("int"+p.i);
		System.out.println("char"+p.c);
	}

}

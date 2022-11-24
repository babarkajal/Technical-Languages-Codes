/*
Exercise 6: (2) Write a program that includes and calls the storage( ) method defined
as a code fragment in this chapter.
*/

class Program {
	int storage(String s) {
		return s.length()*2;
	}

	public static void main(String args[]) {
		Program p = new Program();
		System.out.println("Storage of string: "+ p.storage("KAJAL"));
	}

}

/*
 * Exercise 14: (1) Create a class with a static String field that is initialized at the point of
definition, and another one that is initialized by the static block. Add a static method that
prints both fields and demonstrates that they are both initialized before they are used.
*
*/
class Demo {
	static String str1 = "kajal";
	static String str2;
	static {
		str2 = "Ganesh";
		System.out.println("static ");
	}
	static void display() {
	System.out.println("Str1: "+str1);
	System.out.println("Str2: "+str2);
	}
}

class Program {

	public static void main(String args[] ) {
		Demo.display();
	
	}

}

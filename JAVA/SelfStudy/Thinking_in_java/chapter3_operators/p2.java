/*
 * Exercise 2: (1) Create a class containing a float and use it to demonstrate aliasing.
 */

class Program {
	float f;
}

class main {
	static void f(Program x) {
		x.f = 45.6f;
	}
	public static void main(String args[]) {
		Program p = new Program();
		p.f= 20.5F;
		System.out.println("Before function call: f="+p.f);
		f(p);
		System.out.println("After function call: f= "+p.f);


	}
}

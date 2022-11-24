/*
 * 	Accessing outer class members when there is ambiguity in between inner and outer class
 *
 * 	without this:- refers to the local varible or instance if local not thre
 * 	this :- refers to inner class
 * 	Outer.this :- refers to outer class
 */

class Outer {
	int x=10;
	void fun1() {
		System.out.println("In Outer method");
	}

	class Inner {
		int x=20;

		void fun2() {
			int x =30;
			System.out.println("In inner method");
			System.out.println("local x "+ x);
			System.out.println("Inner class x "+ this.x);
			System.out.println("Outer class x "+ Outer.this.x);
			fun1();
		}

	}

	public static void main(String args[]) {
		new Outer().new Inner().fun2();
	}
}

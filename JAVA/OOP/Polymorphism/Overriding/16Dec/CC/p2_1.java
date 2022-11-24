/*
 * ________________Overriding Final method____________________
 * 
 * 	Final means we cannot change it
 *
 * 	FInal methods cannot be overriden
 *	
 *	3.Child's method is final
 */

class Parent {
	void m1() {
		System.out.println("In m1-parent");
	}
}

class Child extends Parent {
	
	final void m1() {			
		System.out.println("In m1-Child");
	}

	public static void main(String args[]) {
		Child c = new Child();
		c.m1();
	}
}
/*
class Child2 extends Child {
	void m1() {						//error
		System.out.println("In m1-parent");
	}
			
}
*/

/*
 * ________________Overriding Final method____________________
 * 
 * 	Final means we cannot change it
 *
 * 	FInal methods cannot be overriden
 *	
 *	2.both methods are final
 */

class Parent {
	final void m1() {
		System.out.println("In m1-parent");
	}
}

class Child extends Parent {
	
	final void m1() {				//error: cannot override
		System.out.println("In m1-Child");
	}

	public static void main(String args[]) {
		Child c = new Child();
		c.m1();
	}
}



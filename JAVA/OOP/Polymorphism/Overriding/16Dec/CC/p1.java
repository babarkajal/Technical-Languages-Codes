/*
 * ________________Overriding Final method____________________
 * 
 * 	Final means we cannot change it
 *
 * 	Final methods cannot be overriden
 * 	
 * 	1. When parent method is final and overriden by child then it is an error
 */

class Parent {
	final void m1() {
		System.out.println("In m1-parent");
	}
}

class Child extends Parent {
	
	void m1() {				//error: cannot override
		System.out.println("In m1-Child");
	}

	public static void main(String args[]) {
		Child c = new Child();
		c.m1();
	}
}



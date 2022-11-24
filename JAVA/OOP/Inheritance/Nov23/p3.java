/*
 * __________________________ Multiple Inheritance ________________________
 *
 * Java doesn't support the Multiple Inheritance 
 * There are lots of chances that ambiguity will arrise 
 */

class A {
	void m1() {
		System.out.println("In A-m1 method");
	}
}

class B {

	void m1() {
		System.out.println("In B-m1 method");
	}
}

class C extends A, extends B {				//Not allowed

}


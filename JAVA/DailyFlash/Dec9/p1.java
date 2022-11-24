/* first line is super or not
 */

class Parent {
	Parent() {

		System.out.println("In Parent constructor");
	}
}

class Child extends Parent {
	
	Child() {				//in constructor of child class first line is always super() which calls the parent constructor
		System.out.println("In Child constructor");
	}
	public static void main(String args[]) {
		Child c= new Child();			
	}
}

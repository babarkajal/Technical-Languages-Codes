/* print parents variable inside child using this when there is no same in child
 */

class Parent {
	int x = 10;
	Parent() {
		System.out.println("In parent constrcutor");
	}
}

class Child extends Parent {
	int x =20;
	Child() {				//in constructor of child class first line is always super() which calls the parent constructor
		System.out.println("In Child constructor");
		System.out.println("super " + super);				//error
	}
	public static void main(String args[]) {
		Child c= new Child();			
	}
}

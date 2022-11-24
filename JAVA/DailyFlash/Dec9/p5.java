
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
	}
	public static void main(String args[]) {
		System.out.println("this "+ this);
		System.out.println("super"+super.x);
	}
}

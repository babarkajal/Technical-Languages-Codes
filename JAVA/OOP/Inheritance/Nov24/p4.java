/*
 *  Accessing parent's attributes and methods in child class
 */

class Parent {
	int x = 10;
	Parent() {
		System.out.println("Parent constctructor");
	}
	void m1() {
		System.out.println("In Parent-m1 method");
	}
}

class Child extends Parent {
	int x = 20;
	Child() {
		System.out.println("Child constctructor");
	}
	void m1() {
		System.out.println("In Child-m1 method");
		System.out.println("X = "+x);				//20
		System.out.println("super.x = "+super.x);		//10
		super.m1();						//In parent-m1 method
	}

	public static void main(String args[]){
		Child c = new Child();			//Parent Constructor
		c.m1();							//Child Constructor
	}
}

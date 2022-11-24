/*
 *  Super should be the first line in the constructor
 */

class Parent {
	Parent() {
		System.out.println("Parent constctructor");
	}
	void m1() {
		System.out.println("In Parent-m1 method");
	}
}

class Child extends Parent {
	Child() {
		super();		//this calls parent constructor
		//super();		//Error: call to super must be first statement in  constructor
		System.out.println("Child constctructor");
	}
	void m1() {
		System.out.println("In Child-m1 method");
	}

	public static void main(String args[]){
		Child c = new Child();			//Parent Constructor
							//Child Constructor
	}
}

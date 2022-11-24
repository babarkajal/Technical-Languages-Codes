/*
 *  call to super() in method
 */

class Parent {
	Parent() {
		System.out.println("Parent constctructor");
	}
	void m1() {
		super();		//error call to super must be first statement in the constructor
		System.out.println("In Parent-m1 method");
	}
}

class Child extends Parent {
	Child() {
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

/*
 *  Accessing parent's static attributes and methods in child class
 */

class Parent {
	static int x = 10;

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

	//inherited method m1 is here

	public static void main(String args[]){
		Child c = new Child();			//Parent Constructor
	
		Parent p =  new Child();
		p.m1();			//here parent ref and child's object
	}
}

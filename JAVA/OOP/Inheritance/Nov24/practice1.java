/*
 *  Accessing parent's static attributes and methods in child class
 */

class Parent {
	static int x = 10;

	Parent() {
		System.out.println("Parent constctructor");
	}
	static void m1() {
		System.out.println("In Parent-m1 method");
	}
}

class Child extends Parent {
	int x = 20;
	Child() {
		System.out.println("Child constctructor");
	}

	static void m2() {
		System.out.println("In Child-m1 method");
		System.out.println("X = "+x);				//error non static not accessible		
		System.out.println("super.x = "+super.x);		//no-static super not accessible
		super.m1();						//bcoz super comes after object and static comes before object so super is no
	       								//accesible	
	}

	public static void main(String args[]){
		Child c = new Child();			
		c.m2();					
	}
}

/*
 * 	Constructor calls in Inheritance Using Super
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
		System.out.println("Child constctructor");
	}
	void m1() {
		System.out.println("In Child-m1 method");
	}

	public static void main(String args[]){
		Child c = new Child();			//Parent Constructor
							//Child Constructor
		Parent p =new Parent();			//Parent Constructor
		/*
		 * When we create object of any class it calls its constructor after creation of object 
		 * And the resp class calls it's parent class constructor 
		 * This is bcoz there is call to super() in every child class's constructor
		 * If super is not given my programmer then complier adds it 
		 */
	}		
}

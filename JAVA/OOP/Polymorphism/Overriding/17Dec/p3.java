/*
 * 	create protected method display () in parent with protected  and in child with public access spec using parent ref call child's method
 */

class Parent {
	protected void display() {
		System.out.println("In parent display method");
	}
}

class Child extends Parent {
	
	protected void display() {
		System.out.println("In Child display method");
	}

	public static void main(String args[]) {
		Parent p = new Child();
		p.display();
	}
}

/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/17Dec$ java Child
In Child display method
*/

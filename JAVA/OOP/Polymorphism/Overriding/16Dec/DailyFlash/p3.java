/*
 * Why overriding is used?
 *	When child class want the functionality of parent but with different implementation then that method is overriden to get child
 *	specific implementation 
 */

class Parent {
	public static void main(String args[]) {

	}
}

class Child extends Parent {
	public void main(String args[]) {			//we cannot override main function because main method is static 

	}
	
	//this is not overriding scenario this is called method hiding 
	public static void main(String args[]) {

	}

}

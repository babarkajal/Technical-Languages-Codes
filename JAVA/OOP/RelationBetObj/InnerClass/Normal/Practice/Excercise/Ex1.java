/*
Exercise 1: (1) Write a class named Outer that contains an inner class named Inner.
Add a method to Outer that returns an object of type Inner. In main( ), create and
initialize a reference to an Inner.
*/

class Outer {
	
	class Inner {
		void fun() {
			System.out.println("In inner fun");
		}		
		class Inner2{

		}
	}

	Inner getObject() {
		return new Inner();
	}

	public static void main(String args[]) {
		Outer obj = new Outer();
		Outer.Inner ref = obj.getObject();
		ref.fun();
	}
}

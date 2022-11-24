/*
Exercise 5: (1) Create a class with an inner class. In a separate class, make an instance of
the inner class.
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

}

class Main {
	public static void main(String args[]) {
		Outer obj = new Outer();
		Outer.Inner ref = obj.getObject();
		ref.fun();


		Outer.Inner ref2 = obj.new Inner();
	}
}

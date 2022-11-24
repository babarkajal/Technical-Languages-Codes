/*
Exercise 1: print this and Outer.this in inner class
*/

class Outer {
	
	class Inner {
		void fun() {
			System.out.println("In inner fun");
			System.out.println(this);
			System.out.println(Outer.this);
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

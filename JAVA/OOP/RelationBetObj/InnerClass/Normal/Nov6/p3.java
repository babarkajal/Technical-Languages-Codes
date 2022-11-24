/*
 * NullPointerException
 *		
 */

class Outer {

	class Inner {
		int x=20;

		void fun2() {
			System.out.println("In inner method");
		}

	}

	public static void main(String args[]) {
		Outer o = new Outer();
		Inner i = o.new Inner();		/*
							   for java 1.8 getClass method is called to check NullPointer condition
							   for java11 requireNonNull method is called
							   for object  chaining no any method is called in java11 
							 */
		i.fun2();		

	}
}

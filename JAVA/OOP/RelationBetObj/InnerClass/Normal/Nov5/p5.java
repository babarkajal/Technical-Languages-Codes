/* 
 * 	----------------- Ways to create object of inner class ----------------------
 * 	Creating object of Inner class in instance method of other class
 * 	It is same as we created in previous program in main method	
 */

class Outer {
	
	int x = 10;
	class Inner {
		void fun() {
			System.out.println("In Inner class method");
		}
	}

}

class InnerDemo {

	static void fun() {
		Outer o = new Outer();
		Outer.Inner i = o.new Inner();
	        i.fun();			
	}

	public static void main(String args[]) {
		InnerDemo i = new InnerDemo();
		fun();
	}
}


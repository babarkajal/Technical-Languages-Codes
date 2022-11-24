/* 
 * 	Ways to create object of inner class 
 * 	1. Create in same class
 */

class Outer {
	
	int x = 10;
	class Inner {
		void fun() {
			System.out.println("In inner class method");
		}
	}

	public static void main(String args[]) {
		
		Inner i = new Outer().new Inner();		//this is called object chaining 
		i.fun();
	}
}


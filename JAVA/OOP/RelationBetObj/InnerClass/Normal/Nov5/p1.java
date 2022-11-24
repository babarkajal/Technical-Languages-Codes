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
		Outer o = new Outer();
		System.out.println(o.x);
		
		Inner i = o.new Inner();
		i.fun();
	}
}


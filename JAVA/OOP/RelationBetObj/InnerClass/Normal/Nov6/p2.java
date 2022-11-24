/* 
 * 		Nested Inner classes
 * 
*/


class Outer {
	Outer() {
		System.out.println("In Outer class constructor");
	}

	class Inner1 {
		
		Inner1() {
			System.out.println("In Inner class 1 constructor");
		}

		class Inner2 {
			Inner2() {
				System.out.println("In Inner class 2 constructor");
			}

			void fun() {
				System.out.println("In Inner2 mehtod");
				
			}	
		}
		void fun() {
			System.out.println("In Inner1 method");
		}

	}

	public static void main(String args[]) {
		new Outer().new Inner1().new Inner2().fun();	
		// here first Inner2() object is created then Inner1 then outer
	}
}

/*
 		for method chaining, right to left association is there.	
 */

class Outer {
	Outer() {
		System.out.println("In Outer class constructor");
	}
	class Inner {
		int x=20;
		Inner() {
			
			System.out.println("In Inner class constructor");
		}

		void fun2() {
			System.out.println("In inner method");
		}

	}

	public static void main(String args[]) {
		new  Outer().fun2().fun3();	
		new Outer() . new Inner();		//first Inners object will be created then Outers 
		/*
		 * Code:
       0: new           #5                  // class Outer$Inner
       3: dup
       4: new           #6                  // class Outer
       7: dup
       8: invokespecial #7                  // Method "<init>":()V
      11: invokespecial #8                  // Method Outer$Inner."<init>":(LOuter;)V
      14: pop
      15: return
	*/		
	}
}

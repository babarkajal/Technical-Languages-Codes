/* 
 * 	Ways to create object of inner class in other class
 *	
 *	We cannot access one class's variables inside another class directly So here we have to specifiy in which that inne class is
 * 	 	
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
	public static void main(String args[]) {
		//System.out.println("X = "+x);		//here x is what ? Innerdemo dont know it. that why error
				
		Outer o = new Outer();
		System.out.println("o.X = "+o.x);	//No error

		//Inner i = new Inner();			//InnerDemo doesn't Inner because it is inside the Outer so compiler gives error

		//Inner i = o.new Inner();		//compiler finds the constructor but The type is still not known 
		
		Outer.Inner i = o.new Inner();		
		/* Specify in which class the inner class is present */
	        i.fun();			
	}
}


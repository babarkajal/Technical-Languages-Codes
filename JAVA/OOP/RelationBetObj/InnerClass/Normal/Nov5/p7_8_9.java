/* 
 * 		Accessing outer class members inside the inner class
 * 		We can acces all content of the Outer class 
 * 		e.g Water and fish where fish can access all the content of water
 */

class Outer {
	static int x  = 10;
	private int y =20;

	void ifun() {
			System.out.println("Non-static method of outer class");
	}
	
	static void sfun() {
			System.out.println("Static method of outer class");
	}

	class Inner {
		
		void fun() {
			System.out.println("x = " + x + " y = "+y);
			System.out.println("In Inner class method");
			ifun();
			sfun();	
		}
	}

	public static void main(String args[]){
		Inner i = new Outer().new Inner();
		i.fun();
	}
}

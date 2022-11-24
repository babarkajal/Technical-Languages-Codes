/* 
 * 		Creating static content inside the inner class	
 */

class Outer {
	static int x  = 10;

	class Inner {

		static int x = 10;
		/* error: Illegal static declaration in inner class Outer.Inner
		   static int x = 10;
		*/
		
		static void main() {

		}
		/*
		 * error: Illegal static declaration in inner class Outer.Inner
                   static int x = 10;
		*/
	}

	public static void main(String args[]){
		Inner i = new Outer().new Inner();

	}
}

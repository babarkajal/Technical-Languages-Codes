/*
 * Accessing private variables of inner class in outer class
 */


class Outer {
	int  x=10;
	private int y =20;

	class Inner {
		int x = 40;
		private int y = 50;
		void fun() {
			System.out.println("In inner fun");
			System.out.println("this.x = " + this.x);
			System.out.println("this.y = "+ this.y);
			System.out.println("Outer.x = "+Outer.this.x);
			System.out.println("Outer.y = "+Outer.this.y);

		}
		
	}
	Inner getInstance () {
		return new Inner();
	}
	public static void main(String args[]) {
		Inner i = new Outer().getInstance();
		i.fun();
	}
}

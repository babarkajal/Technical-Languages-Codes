/*
Exercise 8: (2) Determine whether an outer class has access to the private elements of
its inner class.
*/

class Outer {
	private int x = 10;
	class Inner {
		private String  y ="kajal";
		private void fun() {
			System.out.println("In inner fun");
			System.out.println("x = "+Outer.this.x);
		}		
	}

	void fun() {
		Inner i = new Inner();
		System.out.println("y = "+i.y);		//works fine 
		//System.out.println("y = "+y);		cannot find symbol
	}
	Inner getObject() {
		return new Inner();
	}

	public static void main(String args[]) {
		Outer obj = new Outer();
		obj.fun();
		Outer.Inner ref = obj.getObject();
		ref.fun();
	}
}

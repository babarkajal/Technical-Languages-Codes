/*
Exercise 3: (1) Modify Exercise 1 so that Outer has a private String field (initialized
by the constructor), and Inner has a toString( ) that displays this field. Create an object of
type Inner and display it.
*/

class Outer {
	private String name;
	Outer(String name) {
		this.name = name;
	}

	class Inner {
		void fun() {
			System.out.println("In inner fun");
			System.out.println("Name = "+ name );
		}		
	}

	public static void main(String args[]) {
		Outer obj = new Outer(null);
		Outer.Inner ref = obj.new Inner();
		ref.fun();
	}
}

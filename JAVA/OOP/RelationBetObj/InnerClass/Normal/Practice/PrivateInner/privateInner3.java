///private Inner class accessing in different class

class Outer {

	private class Inner {
		Inner() {
			System.out.println("In inner class COntructor");
		}	
	}
	
}

class Main {
	public static void main(String args[]) {
		Outer o = new Outer();
		Outer.Inner i = o.new Inner();
	}
	
}

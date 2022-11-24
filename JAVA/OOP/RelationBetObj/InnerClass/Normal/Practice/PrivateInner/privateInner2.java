///private Inner class accessing in same class

class Outer {

	private class Inner {
		private Inner() {
			System.out.println("In inner class COntructor");
		}	
	}
	
	public static void main(String args[]) {
		Outer o = new Outer();
		Inner i = o.new Inner();
	}
}

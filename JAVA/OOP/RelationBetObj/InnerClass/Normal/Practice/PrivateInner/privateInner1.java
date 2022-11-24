///private Inner class accessing in same class

class Outer {

	private class Inner {
		/*here Constructor is not given so compiler adds one default conctructor which is private 
		void fun() {
			System.out.println("In Inner's fun method");
		}*/
	}
	
	public static void main(String args[]) {
		Outer o = new Outer();
		Inner i = o.new Inner();	
//		i.fun();
	}
}

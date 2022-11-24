/* 
 * 	Ways to create object of inner class in instance method of same class
 * 	
 * 	we can create object of inner class inside instanc method 
 * 	As we know we can directly access instance variable into instance method
 */

class Outer {
	
	int x = 10;
	class Inner {
		void fun() {
			System.out.println("In inner class method");
		}
	}

	void OuterFun() {
		//access instance variable x
		System.out.println("X = "+x);
		Inner i = new Inner();	
		i.fun();
	}

	public static void main(String args[]) {
		Outer o = new Outer();
		o.OuterFun();
	}
}


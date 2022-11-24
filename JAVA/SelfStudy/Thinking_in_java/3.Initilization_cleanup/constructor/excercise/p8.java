/*
Exercise 8: (1) Create a class with two methods. Within the first method, call the second
method twice: the first time without using this, and the second time using this—just to see it
working; you should not use this form in practice.
*/

class Program {

	void f1() {
		System.out.println("Hello from method f1");
	}
	void f2() {
		System.out.println("Hello from method f2");
		System.out.println("This"+this);
		this.f1();
		f1();
	}
	public static void main(String[] args) {
		new Program().f2();
			
	}

}

/*
 * 	Methods with dff signature
 */

class Demo {
	void m1(int x ) {
		System.out.println("m1-Int");
	}

	void m1(char y) {
		System.out.println("m1-char");

	}
	public static void main(String args[]) {
		Demo d = new Demo();
		d.m1('A');			//this find perfect matching call from signature table
		d.m1(1000);
	}
}

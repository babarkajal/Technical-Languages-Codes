/*
 * 	Automatic promotion from one type to other
 * 	byte 
 * 	 |
 * 	short 
 * 	 |
 * 	char
 * 	 |
 * 	int 
 * 	 |
 * 	long
 * 	 |
 * 	float
 * 	 |
 * 	double
 */

class OverloadDemo{
	void m1(int x) {
		System.out.println("m1-Int");
	}
	void m1(float y) {
		System.out.println("m1-Float");

	}
	public static void main(String args[]) {
		OverloadDemo d = new OverloadDemo();
		d.m1('A');				//m1-Int
		d.m1(10);				//m1-Int
		d.m1(100l);				//m1-float
		//d.m1(13.4);				//error
		d.m1(13.4f);
	}
}

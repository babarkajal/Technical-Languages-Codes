// Exception

import java.io.*;

class Parent {
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	void m1() throws IOException{
		in.read();
		System.out.println("In m1-parent");
	}
}

class Child extends Parent {
	
	void m1() {				
		System.out.println("In m1-Child");
	}

	public static void main(String args[]) {
		Child c = new Child();
		c.m1();
	}
}



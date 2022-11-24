class Class1 {
	int x = 10;
	Class1 () {
		System.out.println("In default con");
	}
	
	void display() {
		System.out.println("x = " + x);
	}

}

class Class2 extends Class1 {
	int y=20;
	Class2 () {
		System.out.println("In default con of class2");
	}
	
	void display() {
		System.out.println("y = " + y);
	}
}

class Test {
	public static void main(String args[]) {
		Class2 c = new Class2();
		c.display();
	}
}

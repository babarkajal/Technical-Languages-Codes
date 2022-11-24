/*
 * 	Add gradparent and parent's variaBle in child class
 */

class X {
	int p = 10;
}

class Y extends X {
	int q = 20;
}

class Z extends Y {	
	void addition() {
		System.out.println("p+ q = "+ (p+ q));
	}

	public static void main(String[] args) {
		Z z = new Z();
		z.addition();	
	}

}


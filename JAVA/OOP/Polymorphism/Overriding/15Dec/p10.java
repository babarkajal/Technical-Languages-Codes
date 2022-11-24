
class Parent {
	public String toString() {
		return "parent";
	}
	static int var =10;
		
}

class Child extends Parent {
	int var =300;
	//overring method
	public static void career() {
		
	}
	public String toString() {
		return "Child";
	}
	public static void main(String args[]) {
		Child c = new Child();
		Parent c2 = new Child();
		System.out.println(c);
		System.out.println(c2);
	}
}
	

class Test {
	public static void main(String args[]) {
	}		
}

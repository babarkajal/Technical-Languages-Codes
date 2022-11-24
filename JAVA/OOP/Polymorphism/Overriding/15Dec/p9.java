
class Parent {
	static int var =10;
}

class Child extends Parent {
	int var =300;
	//overring method
	public static void career() {
		System.out.println(var);
	}
	public static void main(String args[]) {
		career();	
	}
}
	

class Test {
	public static void main(String args[]) {
	}		
}

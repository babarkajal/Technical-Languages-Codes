/* 
 * create static method in child and father class. call the method using father ref and child's object 
 */

class Father {
	static protected void resp() {
		System.out.println("Father takes care of their family.Give all the happiness for their child");
	}
}

class Child extends Father {
	static protected void resp() {
		System.out.println("Son's responsibilities is take care of their parent and do whatever to make them happy");
	}

	public static void main(String[] args) {
		Father p = new Child();			//parent cha ref ahe so parent chi method call keli jate
		p.resp();
	}
}
/*
 kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/17Dec$ java Child 
Father takes care of their family.Give all the happiness for their child

*/

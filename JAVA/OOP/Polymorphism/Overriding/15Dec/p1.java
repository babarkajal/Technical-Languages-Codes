/*
 * 		___________________Overriding________________________
 * 	When the parent and child class have same method with diff signature and same or covarient return type then this scenario is called 
 * 	overriding
 *
 */


class Parent {
	
	void property() {
		System.out.println("Banglow");
	}
	
	//overriden method
	void career() {
		System.out.println("Doctor");
	}

}

class Child extends Parent {
	
	//overring method
	void career() {
		System.out.println("Engineering");
	}
}
	

class Test {
	public static void main(String args[]) {
		
		Parent p = new Parent();
		p.career();

		Child c = new Child();
		c.career();

		Parent pc = new Child();			//ethe object child ch ahe so child chya method la call janar
		pc.career();
		pc.property();
	}
}

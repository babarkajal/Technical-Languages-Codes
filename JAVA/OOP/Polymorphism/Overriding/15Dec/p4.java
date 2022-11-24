/*
 * 		___________________Overriding and return type________________________
 *
 * 		Return type should be same or covarient in case of overriding scenario 
 *		Covarient means there should be relation between the types 
 *		
 */

class Parent {
	
	void property() {
		System.out.println("Banglow");
	}

	Number  career() {
		System.out.println("Doctor");
		return null;
	}


}

class Child extends Parent {
	
	//overring method
	Float career() { 
		System.out.println("Engineering");		
		return null;
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

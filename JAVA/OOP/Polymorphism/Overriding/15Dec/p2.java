/*
 * 		___________________Overriding and return type________________________
 *
 * 		Return type should be same or covarient in case of overriding scenario 
 *
 */


class Parent {
	
	void property() {
		System.out.println("Banglow");
	}

	void career() {
		System.out.println("Doctor");
	}

}

class Child extends Parent {
	
	//overring method
	String career() {						//error cannot override 
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

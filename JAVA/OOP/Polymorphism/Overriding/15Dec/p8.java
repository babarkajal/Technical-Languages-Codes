/*
 * 	private and public access specifier	
 */


class Parent {

	void property() {
		System.out.println("Banglow");
	}
	
	//overriden method
	 private void career() {
		System.out.println("Doctor");
	}

}

class Child extends Parent {
	
	//overring method
	public void career() {
		System.out.println("Engineering");
	}
}
	

class Test {
	public static void main(String args[]) {
		
		Parent p = new Parent();
		p.career();				//error

		Child c = new Child();
		c.career();

		Parent pc = new Child();			//ethe object child ch ahe so child chya method la call janar
		pc.career();				//error
		pc.property();
	}
}

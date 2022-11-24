/*
 * 	Default access specifier	
 */


class Parent {
	
	void property() {
		System.out.println("Banglow");
	}
	
	//overriden method
	protected void career() {
		System.out.println("Doctor");
	}

}

class Child extends Parent {
	
	//overring method
	void career() {					// protected la default kel mhnjech scope kami zala
							// parent ch mhnana ahe hi method package chya baher sudhha inherit hovu shakte  
							// pn child default karun scope kami karycha try karto
							// mhnun error yeto
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

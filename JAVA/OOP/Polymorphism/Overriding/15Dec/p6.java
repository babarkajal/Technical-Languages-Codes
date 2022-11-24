/*
 * 	Default access specifier	
 */


class Parent {
	
	void property() {
		System.out.println("Banglow");
	}
	
	//overriden method
	public void career() {
		System.out.println("Doctor");
	}

}

class Child extends Parent {
	
	//overring method
	void career() {					// public la default kel mhnjech scope kami kela
							// parent ch mhnana ahe he method saglikde disav pn child ticha scope kami karycha try karto
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

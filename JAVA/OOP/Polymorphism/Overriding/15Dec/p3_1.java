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

	String career() {
		System.out.println("Doctor");
		return null;
	}


}

class Child extends Parent {
	
	//overring method
	Object career() { 					//ethe type ch narrowing hotay String - Object 
								//jevha apan ref parent cha ani object child ch asa scenario gheto tevha
								//returned value store keli tr type ha parent class varunch
								//decide honar karan compiler time la left sidech consider hote Ethe string ahe 
								//run time child chi method return hotana Object class return  Hotoy so ethe data lost
								//honache chances khup ahet
								//mhnun java error det ya scenario la
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

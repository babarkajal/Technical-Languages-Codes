/*
 * 			Overriding 
 *
 * When the return type is different then there will be error that career cannot be overrriden 
 * in child class
 * career() in Daughter cannot override career() in baba

 */

class baba {
	void getProperty() {
		System.out.println("bunglow in pune");
	}	
	void career() {
	
	}	
}

class Daughter extends baba { 	
	int career(String s) {
		System.out.println("Career in engineering field");
		return 0;
	}	
	void marry(){
		System.out.println("Marry with guy who is engineer ");
	}


}

class Unkle {
	public static void main(String[] args) {
		baba d = new baba();	
		d.getProperty();
		d.career();
		//d.marry();
		
		Daughter d1 = new Daughter();	
		d1.getProperty();
		d1.career("");
		d1.marry();

	}
}

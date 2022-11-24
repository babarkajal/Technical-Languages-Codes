/*
 * 			Overriding 
 * Wiriting same method in child class WHich is present in parent class
 * child's method overrides the parent class 
 * there should be parent -child realtion between two classes
 */

class baba {
	void getProperty() {
		System.out.println("bunglow in pune");
	}	
	
	void career() {
		System.out.println("Career in medical field");
	}	
	void marry(){
		System.out.println("Marry with guy who is doctor ");
	}
}

class Daughter extends baba { 	
	void career() {
		System.out.println("Career in engineering field");
	}	
	void marry(){
		System.out.println("Marry with guy who is engineer ");
	}


}

class Unkle {
	public static void main(String[] args) {
		Daughter kajal = new Daughter();
		kajal.getProperty();
		kajal.career();
		kajal.marry();

		baba b = new Daughter();
		b.getProperty();
		b.career();
		b.marry();

		Daughter d = new baba();	//error baba cannot be converted to daughter
		d.getProperty();
		d.career();
		d.marry();

	}
}

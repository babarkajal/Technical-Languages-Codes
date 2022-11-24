class Panipuri {

	void order(String taste) {
		System.out.println("Enjoy your panipuri!!\n Taste is "+ taste);
	}
}

class SweetHome {
	String sName = "Gokul sweets";
	float price = 20;
	Panipuri p = new Panipuri();
	
	void orderPanipuri(String taste) {
		p.order(taste);
		System.out.println("Paid " + price);	
	}
}

class Customer {
	public static void main(String[] args ) {
		SweetHome s = new SweetHome();
		s.orderPanipuri("Medium");
	}
}

/*
 * write real time example for composition
 */

class SweetHome {
	
	private String shopName;
	
	//create object of Panipuri
	Panipuri p; 
	
	SweetHome(String shopName , String taste  , String panipuriType, int price) {
		
		this.shopName = shopName;
		p = new Panipuri(taste, panipuriType, price);
	
	}

	//display the data
	void display() {
		System.out.println("Welcome to Sweet Home !!! "+ shopName);
		p.orderPanipuri();
	}
}

class Panipuri {
	private String taste;
	private String panipuriType;
	private int price;

	Panipuri(String taste, String panipuriType, int price) {
		this.taste = taste;
		this.panipuriType = panipuriType;
		this.price = price;
	}
	
	void orderPanipuri() {
		
		System.out.println("Enjoy your order!!!");
		System.out.println("Panipuri type: "+panipuriType);
		System.out.println("Taste "+ taste);
		System.out.println("Price "+ price);
	
	}
}

class Customer {
	public static void main(String[] args) {
		SweetHome  s1 = new SweetHome("Gokul", "Medium","Sukhi puri", 20);
		SweetHome  s2 = new SweetHome("Vijay", "Tikhat","pani puri", 20);
		s1.display();
		s2.display();

	}
}

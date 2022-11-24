interface MumbaiMarket {
	default void quality() {
		System.out.println("Best Quality");
	}
	void price();
}

class SunilShop implements MumbaiMarket {
	/*public void quality() {
		System.out.println("");
	}*/

	public void price() {
		System.out.println("500-600 rupees");
	}
}

class TilakRoadShop implements MumbaiMarket {
	public void price() {
		System.out.println("800-900 rupees");
	}

}

class Customer {
	public static void main(String args[]) {
		MumbaiMarket obj = new SunilShop();
		obj.quality();
		obj.price();
		
		obj = new TilakRoadShop();
		obj.quality();
		obj.price();
	
	}
}

/*
 kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec23_CC$ java Customer 
Best Quality
500-600 rupees
Best Quality
800-900 rupees

*/

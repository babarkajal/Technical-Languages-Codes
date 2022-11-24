/*
 * 		Abstract Classes 
 * Hiding the internal implementation and showing necessary & imp info to user
 */

abstract class Biryani {
	void taste() {
		System.out.println("Best taste ");
	}

	abstract void price();
	abstract void quantity();
}

class PKBiryani extends Biryani {
	void quantity() {
		System.out.println("PKBiryani gives more quanitity");
	}
	void price() {
		System.out.println("Price is average");
	}
}

class DorabjiBiryani extends Biryani {
	void quantity() {
		System.out.println("DorabjiBiryani gives less quanitity");
	}
	void price() {
		System.out.println("Price is jast");
	}
}

class AbstractDemo {
	public static void main(String args[]) {
		Biryani n1 = new PKBiryani();		
		Biryani n2 = new DorabjiBiryani();		
		n1.quantity();
		n1.price();
		n2.quantity();
		n2.price();
	}
}
/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/AsbtractClass/Dec17$ java AbstractDemo
PKBiryani gives more quanitity
Price is average
DorabjiBiryani gives less quanitity
Price is jast

*/

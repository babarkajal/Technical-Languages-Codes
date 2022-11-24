/* bB
 * Interface: 
 * 	Interface is used to write common  methods of two or more classes.
 * 	Interface contains method which are public and abstract 
 */

interface Yewle {
	void makingTea();
}

class PuneYewle implements Yewle {
	public void makingTea() {
		System.out.println("Welcome to Pune Yewle");
		System.out.println("Starts at 7 AM");
		System.out.println("best taste");
	}	
}

class SataraYewle implements Yewle {
	public void makingTea() {
		System.out.println("Welcome to Satara Yewle");
		System.out.println("Starts at 8 AM");
		System.out.println("best taste");
	}
}

class Sukh {
	public static void main(String [] args) {
		Yewle y = new PuneYewle();
		y.makingTea();
	 	y = new SataraYewle();
		y.makingTea();
	}
}

/*
 * 			--- this ---
 * 'this' is the hidden paramter in non-static method and constructor 
 * 'this' is the first paramter 
 * e.g when we create object 
 * 	IPL i = new IPL("virat",256); 
 * 	 ^
 * 	 |
 * 	 |
 * 	IPL(i , "virat",256)
 */

class IPL {
	private String pName;
	private int runs;

	//constrctor 
	IPL(){
		System.out.println("In No-arg constructor");
	}

	IPL(String pName , int runs) {
		
		this.pName  = pName;
		this.runs = runs;
	}

	void display() {
		System.out.println("Player name: "+ pName);
		System.out.println("Runs: "+ runs);
	}
}

class Match {
	public static void main(String[] args) {
		IPL ipl2019 = new IPL("Virat ", 256);
		ipl2019.display();
		
		IPL ipl2020 = new IPL("Dhoni", 300);
		ipl2020.display();

	}
}

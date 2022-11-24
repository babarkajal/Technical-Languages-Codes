/*
 * _____________ Multilevel inheritance ____________
 * 		
 * 			ICC
 * 			 |
 * 			BCCI
 * 			 |
 * 			 IPL
 * 	this is called Multilevel inheritance
 */

class ICC {
	ICC() {
		System.out.println("ICC constructor");
	}
}

class BCCI {
	BCCI() {
		System.out.println("BCCI constructor");
	}
}

class IPL {
	IPL() {
		System.out.println("IPL constructor");
	}
}

class Match {
	public static void main(String args[]) {
		IPL i = new IPL();					//ICC Constructor
									//BCCI Constructor
									//IPL Constructor 
		
	}

}

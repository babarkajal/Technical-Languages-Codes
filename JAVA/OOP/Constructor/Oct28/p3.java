/*bB
 * Passing the object of one class to the constructor of other class
 */

class BCCI {
	String presName = "Gangoli";
	
	BCCI() {
		System.out.println("In BCCI constructor");
	}
	
}

class IPL extends BCCI{
	
	IPL() {
		System.out.println("In IPL constructor");
	}

	IPL(BCCI o ) {
		System.out.println("In parameterized constructor of IPL");
		System.out.println("President = "+ o.presName);
	}
}

class Match {
	public static void main(String [] args) {
		
		BCCI obj2 = new BCCI();
		IPL obj3 = new IPL(obj2);		
	}
}


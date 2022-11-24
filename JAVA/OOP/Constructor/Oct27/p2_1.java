//bB

/*
 * always There is first line super() in the constructor 
 * If we doesn't provide then complier adds one
 * IF we provide then complier doesn't add one
 */
class BCCI {
	BCCI() {
		System.out.println("In BCCI constructor");
	}	
}

class IPL extends BCCI {
	IPL() {
		//super to call parent's constructor
		super();
		System.out.println("In IPL constructor");
	}	

}

class Match {
	public static void main(String[] args) {
		//create object of BCCI
		BCCI b = new BCCI();		//In BCCI constructor
		IPL i = new IPL();		//In BCCI constructor
						//In IPL constructor
	}
}


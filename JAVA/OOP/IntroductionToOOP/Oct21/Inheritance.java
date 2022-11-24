/*
 * 					Inheritance
 * 	Inheritance is a special feature of OOP
 * 	Inheritance means using already defined functionalities of parent classs and adding new one
 * 	Object is parent of every class
 */

class BCCI {

	int x = 10;
	BCCI() {
		System.out.println("In BCCI constructor");
	}
	void BCCIRules() {
		System.out.println("RUles By BCCI");
		
	}
}

class IPL extends BCCI {
	int  y =20;
	IPL() {
		System.out.println("IPL constructor");
	}

	void iplRules() {
		System.out.println("Rules By IPL");
	}
}

class Match {
	public static void main(String args[]){
		IPL ipl2020 = new IPL();
		ipl2020.iplRules();
		ipl2020.BCCIRules();
		
		BCCI in = new BCCI();
		in.BCCIRules();
		//in.iplRules();	/* error: BCCI la mahitich nhiye ki tychya child ne kontya method lihun thevlya ahet */
		
		BCCI parent = new IPL();// instance IPL ch and ref BCCI ch
		//parent.iplRules();		//error here iplrules method is not present in BCCI 
		parent.BCCIRules();

	}
}

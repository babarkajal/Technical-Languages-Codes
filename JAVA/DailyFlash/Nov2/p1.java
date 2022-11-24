/* WAP with a default constructor and a non-static method and call from the constructor
 */

class Corona {
		
	//default constructor
	Corona() {
		System.out.println("In default constrcutor");
		panademic();	
	}	
	
	//Non-static method 
	void panademic() {
		System.out.println("Corona is increasing day by day and becoming threat for everyone");
	}

	//main
        public static void main(String[] args) {

		//create object of Class 
		Corona c = new Corona();
				

        }
}

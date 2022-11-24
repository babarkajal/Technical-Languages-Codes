class Dam {
	String name = "panshet" ;
	int dateOfVisit = 26012020;
	
	Dam() {
		System.out.println("In default constructor");
		System.out.println("Name of dam "+ name);
		System.out.println("dateOfVisit "+ dateOfVisit);
	}

	public static void main(String[] args) {
		//create object of the Dam
		Dam d = new Dam();
		/* this will create object on heap and simultaniously calls the constructor to initlize all the instance variables
		 */


	}


}

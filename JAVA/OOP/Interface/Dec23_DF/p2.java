

interface  VaccineRegulatoryAuthority {
	void vaccineUpdates();
}

class Pfizer implements VaccineRegulatoryAuthority{
	public void vaccineUpdates() {
		System.out.println("VAccine is tested upto 2 stages.");
	}
}

class Moderna implements VaccineRegulatoryAuthority{
	public void vaccineUpdates() {
		System.out.println("Vaccine is tested upto 1st stage.");
	}
}
class BioNTech implements VaccineRegulatoryAuthority{
	public void vaccineUpdates() {
		System.out.println("Vaccine is tested upto 3 stages. After this we can use this for fighting against Corona");
	}
}

class Test {
	public static void main(String args[]) {
		VaccineRegulatoryAuthority p;
	        p =new Pfizer();
		p.vaccineUpdates();

		p = new Moderna();
		p.vaccineUpdates();

		p = new BioNTech();
		p.vaccineUpdates();
	}
}

/*kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec23DF$ java Test 
VAccine is tested upto 2 stages.
Vaccine is tested upto 1st stage.
Vaccine is tested upto 3 stages. After this we can use this for fighting against Corona

*/

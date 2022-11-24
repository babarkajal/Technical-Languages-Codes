/*
 * 			--- Composition ---
 * Composition is placing object of another class as a instance 
 */

//Doctor is independent class
class Doctor {
	String name = "MR shah";
	int numOfHospVisit = 7;
	
	void operation() {
		System.out.println("Specialist in Brain surgery");
	}
}

//Hospital is one class which contain object of Doctor who are visiting doctors
class Hospital {
	String hName = "Sancheti";
	int numOfDoc = 93;
	Doctor obj = new Doctor();		//composition

	void service() {
		System.out.println("Sancheti Provides good service");
		visitorDoctor();
	}

	void visitorDoctor() {
		obj.operation();
	}
}


class Patients {
	public static void main(String[] args) {
		Hospital h = new Hospital();
		h.service();
	}
}

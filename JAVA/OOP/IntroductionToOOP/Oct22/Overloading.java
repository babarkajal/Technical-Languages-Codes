/* 
 * 					Polymorphism
 * 	Ploymorphism means diff Behavior basesd on diff content
 * 	e.g One person can plays one role at home as son and plays another role in classroom as student
 *	
 *	Two types of polymorphism
 * 	1.Overloading: in same class
 * 	2.Overidding: in different class but if there isrelation ship between them
 *	
 *	OverLoading: 
 *		Writing method of same name but having different signature 
 *		Overloading can be achived in same class only 
 *		return type should be same but in C++ return type doesn't matter 
 *		If return type is different for same signature method it gives error that already defined
 *
 */

class Hospital {
	void getbed(String specific) {
		System.out.println("ICU bed is reserved");
	}
	void getbed() {
		System.out.println("Normal bed is reserved");
	
	}
}

class Patient {
	public static void main(String args[]) {
		Hospital h  = new Hospital();
		h.getbed();
		h.getbed("ICU");
	}
}
  

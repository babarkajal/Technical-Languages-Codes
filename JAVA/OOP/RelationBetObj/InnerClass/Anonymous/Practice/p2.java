/*
 * 	Anonymous inner class
 *
 * 	- We write an anonymous inner class because we just want to override one or more methods
 * 	
 *	- Anonymous, it's for us not for complier. it gives name to the class as Today$1
 *
 *	- Here TripPlan is parent of anonymous class
 *
 */

class TripPlan {

	TripPlan() {
		System.out.println("In TripPlan contructor");
	}

	void plan() {
		System.out.println("Goa trip");
	}
}

class Today {
	public static void main(String[] agrs){
		TripPlan goa = new TripPlan() {
			void plan() {
				System.out.println(":( Goa trip cancled. Alibag trip");
			}
			
		};
		goa.plan();
	}
}

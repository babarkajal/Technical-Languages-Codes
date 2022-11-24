/*
 * 	Anonymous inner class
 */

class TripPlan {
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

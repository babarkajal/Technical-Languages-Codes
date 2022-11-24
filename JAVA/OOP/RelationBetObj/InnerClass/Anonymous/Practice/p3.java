/*
 * 	Anonymous inner class
 *
 *	-Anonymous, it's for us not for complier. it gives name to the class as Today$1
 *	
 *	-When there are two or more anonymous inner classes then complier gives name as Today$1, Today$2 etc
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
		TripPlan goa = new TripPlan() {						//here object of child class is created not of parent
			int x=10;
			void plan() {
				System.out.println(":( Goa trip cancled. Alibag trip "+x);
			}

			void returnTime () {

			}		
		};
		goa.plan();

		goa = new TripPlan() {
			void plan() {
				System.out.println(":( Goa trip cancled. mahabaleshwar trip");	
			}
		};	
		goa.plan();
	}
}

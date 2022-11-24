/*
 * 	Example for inner class 
 * 	IndianDefence and inner classes are army ,navy and airforce
 */

class IndianDefence {
	//constructor
	IndianDefence() {
		System.out.println("Mejor General Bipin Rawat");
	}
	
	//Inner class
	class Army {
		void attack() {
			System.out.println("URI attack");
		}
	}

	class Navy {
		void attack() {
			System.out.println("Gazi attack");
		}
	}

	class Airforce {
		void attack() {
			System.out.println("Balakot attack");
		}
	}

	//main
	public static void main(String[] args) {
		IndianDefence ind = new IndianDefence();
		ind.attack();			//error cannot find symbol bcoz IndianDefence doesn't have method namd as attack 
	}
}


